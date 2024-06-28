/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:43:56 by gduranti          #+#    #+#             */
/*   Updated: 2024/04/22 12:05:16 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	
}

Contact::Contact(const Contact &other) : _first_name(other.getFirstName()), _last_name(other.getLastName()),
		_nickname(other.getNickname()), _phone_number(other.getPhoneNumber()), _darkest_secret(other.getDarkestSecret()) {
	
}

Contact::~Contact(void) {
	
}

std::string	Contact::getFirstName(void) const {
	return (this->_first_name);
}
std::string	Contact::getLastName(void) const {
	return (this->_last_name);
}
std::string	Contact::getNickname(void) const {
	return (this->_nickname);
}
std::string	Contact::getPhoneNumber(void) const {
	return (this->_phone_number);
}
std::string	Contact::getDarkestSecret(void) const {
	return (this->_darkest_secret);
}

void	Contact::setFirstName(std::string str) {
	this->_first_name = str;
}

void	Contact::setLastName(std::string str) {
	this->_last_name = str;
}

void	Contact::setNickname(std::string str) {
	this->_nickname = str;
}

void	Contact::setPhoneNumber(std::string str) {
	this->_phone_number = str;
}

void	Contact::setDarkestSecret(std::string str) {
	this->_darkest_secret = str;
}

void	Contact::fill_contact(std::string fi_na, std::string la_na, std::string nick,
		std::string	ph_nu, std::string da_se) {
		this->setFirstName(fi_na);
		this->setLastName(la_na);
		this->setNickname(nick);
		this->setPhoneNumber(ph_nu);
		this->setDarkestSecret(da_se);
}

void	Contact::print_contact(void) {
	std::cout << "First Name: " << this->getFirstName() << std::endl;
	std::cout << "Last Name: " << this->getLastName() << std::endl;
	std::cout << "Nickname: " << this->getNickname() << std::endl;
	std::cout << "Phone Number: " << this->getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->getDarkestSecret() << std::endl;
}