/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:08:08 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/07 15:30:07 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const nbr ) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = nbr * static_cast<int>(pow(2, this->_bits));
}

Fixed::Fixed( float const nbr ) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(nbr * pow(2, this->_bits));
}

Fixed::Fixed( Fixed const &other ) : _value(other.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const &rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat( void ) const {
	return (this->_value / pow(2, this->_bits));
}

int	Fixed::toInt( void ) const {
	return (this->_value / static_cast<int>(pow(2, this->_bits)));
}

std::ostream & operator<<( std::ostream & outs, Fixed const & rhs) {
	outs<<rhs.toFloat();
	return (outs);
}
