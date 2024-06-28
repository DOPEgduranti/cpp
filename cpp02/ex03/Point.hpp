/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:54:09 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/07 16:01:29 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;
public:
	Point( void );
	Point( const Fixed &x, const Fixed &y );
	Point( const Point &other );
	~Point();

	Point & operator=( const Point &rhs );
	Fixed	getX( void ) const;
	Fixed	getY( void ) const;
};

Fixed area_calc(Point const a, Point const b, Point const c);
bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif