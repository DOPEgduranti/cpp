/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:08:08 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/07 16:09:40 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const nbr ) {
	// std::cout << "Int constructor called" << std::endl;
	this->_value = nbr * static_cast<int>(pow(2, this->_bits));
}

Fixed::Fixed( float const nbr ) {
	// std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(nbr * pow(2, this->_bits));
}

Fixed::Fixed( Fixed const &other ) : _value(other.getRawBits()) {
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const &rhs ) {
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+( Fixed const &rhs ) const {
	Fixed	res;
	res.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator-( Fixed const &rhs ) const {
	Fixed	res;
	res.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator*( Fixed const &rhs ) const {
	Fixed	res;
	res.setRawBits((this->getRawBits() * rhs.getRawBits()) / pow(2, this->_bits));
	return (res);
}

Fixed	Fixed::operator/( Fixed const &rhs ) const {
	Fixed res(this->toFloat() / rhs.toFloat());
	return (res);
}

bool	Fixed::operator>( Fixed const &rhs ) const {
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<( Fixed const &rhs ) const {
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const &rhs ) const {
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const &rhs ) const  {
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const &rhs ) const {
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const &rhs ) const {
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed &	Fixed::operator++( void ) {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed &	Fixed::operator--( void ) {
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++( int ) {
	Fixed	res;
	res.setRawBits(this->getRawBits() + 1);
	return (res);
}

Fixed	Fixed::operator--( int ) {
	Fixed	res;
	res.setRawBits(this->getRawBits() - 1);
	return (res);
}

int		Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw ) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float	Fixed::toFloat( void ) const {
	return (this->_value / pow(2, this->_bits));
}

int	Fixed::toInt( void ) const {
	return (this->_value / static_cast<int>(pow(2, this->_bits)));
}

Fixed & Fixed::min( Fixed &first, Fixed &second ) {
	return (first.getRawBits() > second.getRawBits() ? second : first);
}

const Fixed & Fixed::min( const Fixed &first, const Fixed &second ) {
	return (first.getRawBits() > second.getRawBits() ? second : first);
}

Fixed & Fixed::max( Fixed &first, Fixed &second ) {
	return (first.getRawBits() > second.getRawBits() ? first : second);
}

const Fixed & Fixed::max( const Fixed &first, const Fixed &second ) {
	return (first.getRawBits() > second.getRawBits() ? first : second);
}

std::ostream & operator<<( std::ostream & outs, Fixed const & rhs) {
	outs<<rhs.toFloat();
	return (outs);
}
