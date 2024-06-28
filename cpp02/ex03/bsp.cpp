/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:00:14 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/13 11:27:05 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed sign (Point p1, Point p2, Point p3) {
    return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

Fixed area_calc(Point const a, Point const b, Point const c) {
	return (Fixed ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()))));
}

bool bsp( Point const a, Point const b, Point const c, Point const point ) {
	Fixed	f1(sign(point, a, b));
	Fixed	f2(sign(point, b, c));
	Fixed	f3(sign(point, c, a));
	bool has_neg, has_pos;
	
	has_neg = (f1 < 0) || (f2 < 0) || (f3 < 0);
    has_pos = (f1 > 0) || (f2 > 0) || (f3 > 0);

    return !(has_neg && has_pos);
}
