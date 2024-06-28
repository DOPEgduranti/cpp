/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:24:44 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/13 10:19:02 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat defalult constructor has been called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &other ) : WrongAnimal(other.getType()) {
	std::cout << "WrongCat copy constructor has been called" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor has been called" << std::endl;
}

WrongCat & WrongCat::operator=( const WrongCat &rhs ) {
	this->_type = rhs.getType();
	return (*this);
}

void WrongCat::makeSound( void ) const {
	std::cout << "* BEEE *" << std::endl;
}