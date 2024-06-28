/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:32:13 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 10:51:30 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	try {
		Bureaucrat b("cicio", 2);
		Bureaucrat c;
		c = b;
		c.incrementGrade();
		std::cout << c << std::endl;
		c.incrementGrade();
	}
	catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}