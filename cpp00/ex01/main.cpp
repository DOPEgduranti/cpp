/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:55:14 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/06 09:59:12 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main (void)
{
	std::string	prompt;
	PhoneBook book;
	while (true) {
		std::cout << "Would you like to ADD, SEARCH or EXIT?" << std::endl;
		getline(std::cin >> std::ws, prompt);
		if (std::cin.eof())
			break ;
		if (prompt.compare("ADD") == 0)
			book.add_contact();
		else if (prompt.compare("SEARCH") == 0)
			book.search_contact();
		else if (prompt.compare("EXIT") == 0)
			break ;
		else
			std::cout << "WRONG INPUT" << std::endl;
	}

	return (0);
}