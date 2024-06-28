/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:15:37 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/13 10:14:33 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal") {
	std::cout << "WrongAnimal defalult constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string str ) : _type(str) {
	std::cout << "WrongAnimal string constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other.getType()) {
	std::cout << "WrongAnimal copy constructor has been called" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor has been called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( const WrongAnimal &rhs ) {
	this->_type = rhs.getType();
	return (*this);
}

std::string WrongAnimal::getType( void ) const {
	return (this->_type);
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "* WRONG ANIMAL SOUND *" << std::endl;
}