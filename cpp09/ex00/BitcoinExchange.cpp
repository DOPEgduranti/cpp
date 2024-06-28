/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:11:37 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/26 16:12:50 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool parseDate( std::string date ) {
	if (date.size() != 10)
		return false;
	for (size_t i = 0; i < date.size(); i++) {
		if (i == 4 || i == 7) {
			if (date[i] != '-')
			return false;
		}
		else {
			if (!std::isdigit(date[i]))
				return false;
		}
	}
	long year = std::strtol(date.c_str(), NULL, 10);
	long month = std::strtol(date.substr(5, 2).c_str(), NULL, 10);
	long day = std::strtol(date.substr(8, 2).c_str(), NULL, 10);
	if (year < 2009 || year > 2024)
		return false;
	if (month < 1 || month > 12 || (month < 10 && date[5] != '0'))
		return false;
	if (day < 1 || day > 31 || (day < 10 && date[8] != '0') || (month == 2 && day > 29))
		return false;
	return true;
}

bool dbParse( std::ifstream &fin, std::map<std::string, double> *map ) {
	std::string buffer;
	std::getline(fin, buffer);
	if (buffer != "date,exchange_rate")
		return false;
	std::getline(fin, buffer);
	if (buffer.empty())
		return false;
	double l;
	size_t i;
	bool dot;
	while (!buffer.empty()) {
		if (std::strtod(&buffer[0], NULL) < 2009 || std::strtod(&buffer[0], NULL) > 2024)
			return false;
		if (parseDate(buffer.substr(0, 10)) == false)
			return false;
		if (buffer[10] != ',') 
			return false;
		if (buffer.size() < 12)
			return false;
		i = 11;
		l = std::strtod(&buffer[i], NULL);
		if (l < 0)
			return false;
		dot = false;
		while (buffer[i]) {
			if(buffer[i] == '.' && dot == true)
				return false;
			else if (buffer[i] == '.' && dot == false)	
				dot = true;
			else if (!std::isdigit(buffer[i]))
				return false;
			i++;
		}
		(*map)[buffer.substr(0, 10)] = l;
		std::getline(fin, buffer);
	}
	fin.close();
	return true;
}

bool ft_support( std::string &buffer, size_t &i, bool &dot ) {
	while (buffer[i]) {
		if(buffer[i] == '.' && dot == true)
			return false;
		else if (buffer[i] == '.' && dot == false)	
			dot = true;
		else if (!std::isdigit(buffer[i]))
			return false;
		i++;
	}
	return true;
}

void printValue( std::map<std::string, double> &dataBase, std::string date, double value) {
	std::map<std::string, double>::iterator it = dataBase.find(date);
	long year = std::strtol(date.c_str(), NULL, 10);
	long month = std::strtol(date.substr(5, 2).c_str(), NULL, 10);
	long day = std::strtol(date.substr(8, 2).c_str(), NULL, 10);
	while (it == dataBase.end()) {
		std::stringstream ss;
		day--;
		if (day < 1) {
			day = 31;
			month--;
		}
		if (month < 1) {
			month = 12;
			year--;
		}
		if (year < 2009) {
			std::cerr << "Error: bad input => " << date <<std::endl;
			return ;
		}
		ss << year << "-";
		if (month < 10)
			ss << "0";
		ss << month << "-";
		if (day < 10)
			ss << "0";
		ss << day;
		it = dataBase.find(ss.str());
	}
	std::cout << date << " => " << value << " => " << value * it->second << std::endl;
}

void calculate( std::map<std::string, double> &dataBase, std::ifstream &fin ) {
	std::string buffer;
	(void) dataBase;
	std::getline(fin, buffer);
	if (buffer != "date | value") {
		std::cerr << "Error: input file columns title shuld be 'date | value'." <<std::endl;
		return ;
	}
	double l;
	size_t i;
	bool dot;
	while (std::getline(fin, buffer)) {
		if (parseDate(buffer.substr(0, 10)) == false) {
			std::cerr << "Error: bad input => '" << buffer.substr(0, 10) << "'" <<std::endl;
			continue ;
		}
		if (buffer.substr(10, 3) != " | ") {
			std::cerr << "Error: bad input separator at => '" << buffer << "'" <<std::endl;
			continue ;
		}
		if (buffer.size() < 13) {
			std::cerr << "Error: missing value." <<std::endl;
			continue ;
		}
		i = 13;
		l = std::strtod(&buffer[i], NULL);
		if (l < 0) {
			std::cerr << "Error: not a positive number => '" << buffer  << "'" <<std::endl;
			continue ;
		}
		if (l > 1000) {
			std::cerr << "Error: too large number => '" << buffer << "'" <<std::endl;
			continue ;
		}
		if (ft_support(buffer, i, dot) == false) {
			std::cerr << "Error: bad numeric input => '" << &buffer[i] << "'" <<std::endl;
			continue ;
		}
		printValue(dataBase, buffer.substr(0, 10), l);
	}
}

void BitcoinExchange::Exchange( std::string inFile ) {
	std::ifstream db("data.csv");
	if (db.fail()) {
		std::cerr << "Error: database not found." <<std::endl;
		return ;
	}
	std::map<std::string, double> dataBase;
	if (dbParse(db, &dataBase) == false) {
		std::cerr << "Error: database parsig gone wrong." <<std::endl;
		return db.close();
	}
	if (inFile.empty())
		return ;
	std::ifstream fin(inFile.c_str());
	if (fin.fail()) {
		std::cerr << "Error: input file '" << inFile << "' cannot be opened." <<std::endl;
		return ;
	}
	calculate(dataBase, fin);
	fin.close();
}

