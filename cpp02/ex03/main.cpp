/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:42:59 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/07 16:01:03 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point a(0, 0);
	Point b(a);
	Point c(a);
	Point p(a);

	if (area_calc(a, b, c) == 0) {
		std::cout << "not a triangle" << std::endl;
		return (0);
	}
	if (bsp(a, b, c , p))
		std::cout << "inside" << std::endl;
	else
		std::cout << "outside" << std::endl;
}