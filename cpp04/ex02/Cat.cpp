/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:24:44 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/13 11:43:30 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
	std::cout << "Cat default constructor has been called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( const Cat &other ) {
	std::cout << "Cat copy constructor has been called" << std::endl;
	*this = other;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor has been called" << std::endl;
}

Cat & Cat::operator=( const Cat &rhs ) {
	this->_type = rhs.getType();
	this->_brain = rhs.getBrain();
	return (*this);
}

Brain *Cat::getBrain( void ) const {
	return (this->_brain);
}

void Cat::makeSound( void ) const {
	std::cout << "* MEOW *" << std::endl;
}