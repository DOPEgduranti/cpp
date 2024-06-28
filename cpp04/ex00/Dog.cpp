/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:36:25 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/10 12:36:45 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Dog defalult constructor has been called" << std::endl;
}

Dog::Dog( const Dog &other ) : Animal(other.getType()) {
	std::cout << "Dog copy constructor has been called" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor has been called" << std::endl;
}

Dog & Dog::operator=( const Dog &rhs ) {
	this->_type = rhs.getType();
	return (*this);
}

void Dog::makeSound( void ) const {
	std::cout << "* WOF *" << std::endl;
}