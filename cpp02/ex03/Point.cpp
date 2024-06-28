/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:01:21 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/07 12:27:12 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {
	
}

Point::Point( const Fixed &x, const Fixed &y ) : _x(x), _y(y) {
	
}

Point::Point( const Point &other ) : _x(other.getX()), _y(other.getY()) {
	
}

Point::~Point() {

}

Point & Point::operator=( const Point &rhs ) {
	(Fixed)(this->_x) = rhs.getX();
	(Fixed)(this->_y) = rhs.getY();
	return (*this);
}

Fixed	Point::getX( void ) const {
	return (this->_x);
}

Fixed	Point::getY( void ) const {
	return (this->_y);
}