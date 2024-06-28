/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:36:25 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/13 12:38:59 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Dog default constructor has been called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( const Dog &other ) {
	std::cout << "Dog copy constructor has been called" << std::endl;
	*this = other;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor has been called" << std::endl;
	delete this->_brain;
}

Dog & Dog::operator=( const Dog &rhs ) {
	this->_type = rhs.getType();
	delete this->_brain;
	this->_brain = new Brain(rhs.getBrain());
	return (*this);
}

Brain & Dog::getBrain( void ) const {
	return (*(this->_brain));
}

void Dog::makeSound( void ) const {
	std::cout << "* WOF *" << std::endl;
}