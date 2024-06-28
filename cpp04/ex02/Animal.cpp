/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:15:37 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/13 12:44:15 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Animal") {
	std::cout << "Animal default constructor has been called" << std::endl;
}

Animal::Animal( const std::string str ) : _type(str) {
	std::cout << "Animal string constructor has been called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other.getType()) {
	std::cout << "Animal copy constructor has been called" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor has been called" << std::endl;
}

Animal & Animal::operator=( const Animal &rhs ) {
	this->_type = rhs.getType();
	return (*this);
}

std::string Animal::getType( void ) const {
	return (this->_type);
}
