/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:50:17 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 11:14:41 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	// std::cout << "Intern empty constructor has been called" << std::endl;
};

Intern::Intern(const Intern & other) {
	(void)other;
	// std::cout << "Intern copy constructor has been called" << std::endl;
};

Intern::~Intern(void) {
	// std::cout << "Intern destructor has been called" << std::endl;
};

Intern & Intern::operator=(const Intern & other) {
	(void)other;
	return (*this);
};

AForm * genShrubberyCreationForm(const std::string formTarget) {
	return (new ShrubberyCreationForm(formTarget));
};

AForm * genRobotomyRequestForm(const std::string formTarget) {
	return (new RobotomyRequestForm(formTarget));
};

AForm * genPresidentialPardonForm(const std::string formTarget) {
	return (new PresidentialPardonForm(formTarget));
};

AForm * Intern::makeForm(const std::string formName, const std::string formTarget) {
	std::string formType[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm * (*funcs[])(std::string formTarget) = {
		&genShrubberyCreationForm,
		&genRobotomyRequestForm,
		&genPresidentialPardonForm
	};
	for (int i = 0; i < 3; i++) {
		if (formName == formType[i]) {
			std::cout << "Intern creates " << formName << " form" << std::endl;
			return ((funcs[i])(formTarget));
		}
	}
	std::cout << "Intern cannot creates a " << formName << " form" << std::endl;
	throw Intern::FormTypeException();
	return (NULL);
};
