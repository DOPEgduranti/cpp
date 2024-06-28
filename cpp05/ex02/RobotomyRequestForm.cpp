/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:58:02 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 10:58:16 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), _target("default") {
	// std::cout << "RobotomyRequestForm empty constructor has been called" << std::endl;
	srand((unsigned)time(0));
};

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("Robotomy Request", 72, 45), _target(target) {
	// std::cout << "RobotomyRequestForm arguments constructor has been called" << std::endl;
	srand((unsigned)time(0));
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other) : AForm(other), _target(other._target) {
	// std::cout << "RobotomyRequestForm copy constructor has been called" << std::endl;
	srand((unsigned)time(0));
};

RobotomyRequestForm::~RobotomyRequestForm() {
	// std::cout << "RobotomyRequestForm destructor has been called" << std::endl;
};

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other) {
	srand((unsigned)time(0));
	this->_target = other._target;
	this->AForm::operator=(other);
	return (*this);
};

std::string RobotomyRequestForm::getTarget(void) const {
	return (this->_target);
};

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == false)
		throw (AForm::NotSignedExeption());
	if (executor.getGrade() > this->getExecGrade())
		throw (AForm::GradeTooLowException());
	int nbr = rand() % 2;
	std::cout << "------------------------" << std::endl;
	std::cout << "* DRILLING NOISES *" << std::endl;
	if (nbr)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " robotomy failed" << std::endl;
	std::cout << "------------------------" << std::endl;
};
