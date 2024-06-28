/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:51:00 by gduranti          #+#    #+#             */
/*   Updated: 2024/04/24 10:03:05 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "memory address" << std::endl;
	std::cout << "str: " << &str << "   ptr: " << stringPTR << "   ref: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "value" << std::endl;
	std::cout << "str: " << str << "   ptr: " << *stringPTR << "   ref: " << stringREF << std::endl;

	return (0);
}