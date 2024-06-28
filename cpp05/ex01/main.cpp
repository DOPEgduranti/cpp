/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:32:13 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 10:53:11 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	try {
		Form f("contract", false, 55, 99);
		Bureaucrat b("cicio", 10);
		Bureaucrat c;
		c = b;
		c.signForm(f);
		c.signForm(f);
	}
	catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}