/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:32:03 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/18 16:06:04 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unknown") {
	std::cout << "Bureaucrat empty constructor has been called" << std::endl;
	this->_grade = 150;
};

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat arguments constructor has been called" << std::endl;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
};

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {
	std::cout << "Bureaucrat copy constructor has been called" << std::endl;
};

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat default destructor has been called" << std::endl;
};

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &other) {
	const_cast<std::string &>(this->_name) = other._name;
	this->_grade = other._grade;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	return (*this);
};

std::string Bureaucrat::getName(void) const {
	return (this->_name);
};

int Bureaucrat::getGrade(void) const {
	return (this->_grade);
};

void Bureaucrat::incrementGrade() {
	if (this->_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade -= 1;
};

void Bureaucrat::decrementGrade() {
	if (this->_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade += 1;
};

void Bureaucrat::signForm(Form &form) {
	try {
		if (form.beSigned(*this) == true)
			std::cout << this->_name << " signed " << form.getName() << std::endl;
		else
			std::cout << this->_name << " couldn’t sign " << form.getName() << " because is already signed" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->_name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
};

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Error: grade too high");
};

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Error: grade too low");
};

std::ostream & operator<<(std::ostream &outs, const Bureaucrat &other) {
	outs << other.getName() << ", bureaucrat grade " << other.getGrade();
	return (outs);
};