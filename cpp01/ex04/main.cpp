/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:18:47 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/02 12:19:47 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funct.hpp"

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Error: those are not 3 parameters" << std::endl;
		return (0);
	}
	std::string	file_name = argv[1];
	std::string	find_str = argv[2];
	std::string	replace_str = argv[3];
	if (file_name.empty() || find_str.empty() || replace_str.empty()) {
		std::cerr << "Error: no empty parameters allowed" << std::endl;
		return (0);
	}
	search_replace(file_name, find_str, replace_str);
	return (0);
}