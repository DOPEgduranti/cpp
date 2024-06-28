/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:24:44 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/10 12:35:29 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
	std::cout << "Cat defalult constructor has been called" << std::endl;
}

Cat::Cat( const Cat &other ) : Animal(other.getType()) {
	std::cout << "Cat copy constructor has been called" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor has been called" << std::endl;
}

Cat & Cat::operator=( const Cat &rhs ) {
	this->_type = rhs.getType();
	return (*this);
}

void Cat::makeSound( void ) const {
	std::cout << "* MEOW *" << std::endl;
}