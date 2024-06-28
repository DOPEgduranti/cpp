/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:58:02 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 10:58:03 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5), _target("default") {
	// std::cout << "PresidentialPardonForm empty constructor has been called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidential Pardon", 25, 5), _target(target) {
	// std::cout << "PresidentialPardonForm arguments constructor has been called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) : AForm(other), _target(other._target) {
	// std::cout << "PresidentialPardonForm copy constructor has been called" << std::endl;
};

PresidentialPardonForm::~PresidentialPardonForm() {
	// std::cout << "PresidentialPardonForm destructor has been called" << std::endl;
};

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & other) {
	this->_target = other._target;
	this->AForm::operator=(other);
	return (*this);
};

std::string PresidentialPardonForm::getTarget(void) const {
	return (this->_target);
};

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == false)
		throw (AForm::NotSignedExeption());
	if (executor.getGrade() > this->getExecGrade())
		throw (AForm::GradeTooLowException());
	std::cout << "------------------------" << std::endl;
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	std::cout << "------------------------" << std::endl;
};
