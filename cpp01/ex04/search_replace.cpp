/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:57:35 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/03 12:46:58 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funct.hpp"

int	search_replace(std::string file_name, std::string find_str, std::string replace_str) {
	std::string	file_str;
	std::string	new_str;

	std::ifstream	in_file(file_name.c_str());
	if (in_file.fail()) {
		std::cerr << "Error: file can not be opened for input" << std::endl;
		return (-1);
	}
	std::getline(in_file, file_str, '\0');
	in_file.close();
	std::size_t pointer = file_str.find(find_str);
	while (pointer >= 0 && pointer <= file_str.length()) {
		new_str.append(file_str.substr(0, pointer));
		new_str.append(replace_str);
		file_str = file_str.substr(pointer + find_str.length());
		pointer = file_str.find(find_str);
	}
	new_str.append(file_str);
	file_name.append(".replace");
	std::ofstream	out_file(file_name.c_str());
	if (out_file.fail()) {
		std::cerr << "Error: file can not be opened for output" << std::endl;
		return (-1);
	}
	out_file << new_str;
	out_file.close();
	return (0);
}