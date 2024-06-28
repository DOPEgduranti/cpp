/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:32:13 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 11:15:52 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	try {
		Bureaucrat b("cicio", 1);
		Bureaucrat c;
		c = b;
		{
			Intern someRandomIntern;
			AForm* rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			c.signForm(*rrf);
			c.executeForm(*rrf);
			delete rrf;
		}
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}