/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:32:13 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/20 11:39:03 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	try {
		ShrubberyCreationForm f("tree");
		RobotomyRequestForm	g("sgarigli");
		RobotomyRequestForm	e("pippo");
		PresidentialPardonForm h;
		Bureaucrat b("cicio", 10);
		Bureaucrat c;
		c = b;
		e = g;
		c.signForm(f);
		f.execute(c);
		c.signForm(e);
		e.execute(c);
		c.signForm(h);
		c.executeForm(h);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}