/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:37:56 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/06 10:04:32 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->_index = 0;
}

PhoneBook::PhoneBook(const PhoneBook &other) : _index(other._index) {
	for (int i = 0; i < _index; i++)
		this->_contacts[i] = other._contacts[i];
}

PhoneBook::~PhoneBook(void) {
	
}

void	PhoneBook::add_contact(void) {
	Contact	new_contact;
	std::string fi_na;
	std::string la_na;
	std::string nick;
	std::string	ph_nu;
	std::string da_se;
	do {
		std::cout << "first name: ";
		getline(std::cin >> std::ws, fi_na);
		if (std::cin.eof())
			exit(0);
	} while (fi_na.empty());
	do {
		std::cout << "last name: ";
		getline(std::cin >> std::ws, la_na);
		if (std::cin.eof())
			exit(0);
	} while (la_na.empty());
	do {
		std::cout << "nickname: ";
		getline(std::cin >> std::ws, nick);
		if (std::cin.eof())
			exit(0);
	} while (nick.empty());
	do {
		std::cout << "phone number: ";
		getline(std::cin >> std::ws, ph_nu);
		if (std::cin.eof())
			exit(0);
	} while (check__phone_number(ph_nu) == false);
	do {
		std::cout << "darkest secret: ";
		getline(std::cin >> std::ws, da_se);
		if (std::cin.eof())
			exit(0);
	} while (da_se.empty());
	new_contact.fill_contact(fi_na, la_na, nick, ph_nu, da_se);
	if (this->_index < 8) {
		this->_contacts[_index] = new_contact;
		this->_index++;
	}
	else {
		this->_contacts[0].~Contact();
		for (int i = 0; i < 7; i++)
			this->_contacts[i] = this->_contacts[i + 1];
		this->_contacts[7] = new_contact;
	}
}

void	PhoneBook::search_contact(void) {
	std::string	name;
	std::string	surname;
	std::string	nick;
	std::string	ind;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < this->_index; i++) {
		name = this->_contacts[i].getFirstName();
		surname = this->_contacts[i].getLastName();
		nick =this->_contacts[i].getNickname();
		std::cout << "         " << i << "|" << cut_ten(name) << "|"
				<< cut_ten(surname) << "|" << cut_ten(nick) << std::endl;
	}
	std::cout << "insert desired index: ";
	getline(std::cin >> std::ws, ind);
	if (std::cin.eof())
			exit(0);
	if (ind.empty() || ind.length() > 1 || !(ind[0] >= '0' && ind[0] < this->_index + '0'))
		std::cout << "No contact correspond to insert index" << std::endl;
	else
		this->_contacts[ind[0] - '0'].print_contact();
}