/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:44:33 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 10:52:52 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("unknown"), _signed(false), _signGrade(150), _execGrade(150) {
	std::cout << "Form empty constructor has been called" << std::endl;
};

Form::Form(const std::string name, const bool sign, const int signGrade, const int execGrade) : _name(name), _signed(sign), _signGrade(signGrade), _execGrade(execGrade) {
	std::cout << "Form arguments constructor has been called" << std::endl;
	if (this->_signGrade > 150)
		throw (Form::GradeTooLowException());
	if (this->_signGrade < 1)
		throw (Form::GradeTooHighException());
	if (this->_execGrade > 150)
		throw (Form::GradeTooLowException());
	if (this->_execGrade < 1)
		throw (Form::GradeTooHighException());
};

Form::Form(const Form &other) : _name(other._name), _signed(other._signed), _signGrade(other._signGrade), _execGrade(other._execGrade) {
	std::cout << "Form copy constructor has been called" << std::endl;
};

Form::~Form() {
	std::cout << "Form destructor has been called" << std::endl;
};

Form & Form::operator=(const Form &other) {
	const_cast<std::string &>(this->_name) = other._name;
	const_cast<int &>(this->_signGrade) = other._signGrade;
	const_cast<int &>(this->_execGrade) = other._execGrade;
	if (this->_signGrade > 150)
		throw (Form::GradeTooLowException());
	if (this->_signGrade < 1)
		throw (Form::GradeTooHighException());
	if (this->_execGrade > 150)
		throw (Form::GradeTooLowException());
	if (this->_execGrade < 1)
		throw (Form::GradeTooHighException());
	return (*this);
};

std::string Form::getName(void) const {
	return (this->_name);
};

bool Form::getSigned(void) const {
	return (this->_signed);
};

int Form::getSignGrade(void) const {
	return (this->_signGrade);
};

int Form::getExecGrade(void) const {
	return (this->_execGrade);
};

bool Form::beSigned(Bureaucrat &bur) {
	if (this->_signed == true)
		return (false);
	else if (bur.getGrade() <= this->_signGrade) {
		this->_signed = true;
		return (true);
	}
	else {
		throw (Form::GradeTooLowException());
		return (false);
	}
};

const char* Form::GradeTooHighException::what() const throw() {
	return ("grade too high");
};

const char* Form::GradeTooLowException::what() const throw() {
	return ("grade too low");
};

std::ostream & operator<<(std::ostream &outs, const Form &other) {
	std::string str = "not signed";
	if (other.getSigned() == true)
		str = "signed";
	outs << other.getName() << "form is " << str << ", requires grade " << other.getSignGrade() << " to be signed and grade " << other.getExecGrade() << " to be executed";
	return (outs);
};
