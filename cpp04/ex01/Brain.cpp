/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:34:45 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/13 12:00:12 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain default constructor has been called" << std::endl;
}

Brain::Brain( const Brain &other ) {
	*this = other;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor has been called" << std::endl;
}

Brain & Brain::operator=( const Brain &rhs ) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

