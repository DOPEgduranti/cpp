/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:44:33 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 10:57:13 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("unknown"), _signed(false), _signGrade(150), _execGrade(150) {
	// std::cout << "AForm empty constructor has been called" << std::endl;
};

AForm::AForm(const std::string name, const int signGrade, const int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
	// std::cout << "AForm arguments constructor has been called" << std::endl;
	if (this->_signGrade > 150)
		throw (AForm::GradeTooLowException());
	if (this->_signGrade < 1)
		throw (AForm::GradeTooHighException());
	if (this->_execGrade > 150)
		throw (AForm::GradeTooLowException());
	if (this->_execGrade < 1)
		throw (AForm::GradeTooHighException());
};

AForm::AForm(const AForm &other) : _name(other._name), _signed(other._signed), _signGrade(other._signGrade), _execGrade(other._execGrade) {
	// std::cout << "AForm copy constructor has been called" << std::endl;
};

AForm::~AForm() {
	// std::cout << "AForm destructor has been called" << std::endl;
};

AForm & AForm::operator=(const AForm &other) {
	const_cast<std::string &>(this->_name) = other._name;
	const_cast<int &>(this->_signGrade) = other._signGrade;
	const_cast<int &>(this->_execGrade) = other._execGrade;
	if (this->_signGrade > 150)
		throw (AForm::GradeTooLowException());
	if (this->_signGrade < 1)
		throw (AForm::GradeTooHighException());
	if (this->_execGrade > 150)
		throw (AForm::GradeTooLowException());
	if (this->_execGrade < 1)
		throw (AForm::GradeTooHighException());
	return (*this);
};

std::string AForm::getName(void) const {
	return (this->_name);
};

bool AForm::getSigned(void) const {
	return (this->_signed);
};

int AForm::getSignGrade(void) const {
	return (this->_signGrade);
};

int AForm::getExecGrade(void) const {
	return (this->_execGrade);
};

bool AForm::beSigned(Bureaucrat &bur) {
	if (this->_signed == true)
		return (false);
	else if (bur.getGrade() <= this->_signGrade)
	{
		this->_signed = true;
		return (true);
	}
	else
	{
		throw (AForm::GradeTooLowException());
		return (false);
	}
};

const char* AForm::GradeTooHighException::what() const throw() {
	return ("grade too high");
};

const char* AForm::GradeTooLowException::what() const throw() {
	return ("grade too low");
};

const char* AForm::NotSignedExeption::what() const throw() {
	return ("form is not signed");
};

std::ostream & operator<<(std::ostream &outs, const AForm &other) {
	std::string str = "not signed";
	if (other.getSigned() == true)
		str = "signed";
	outs << other.getName() << "form is " << str << ", requires grade " << other.getSignGrade() << " to be signed and grade " << other.getExecGrade() << " to be executed";
	return (outs);
};
