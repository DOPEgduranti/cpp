/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:07:16 by gduranti          #+#    #+#             */
/*   Updated: 2024/04/24 11:00:33 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str) {
	
}

Weapon::~Weapon() {
	
}

void	Weapon::setType(std::string str) {
	this->_type = str;
}

std::string&	Weapon::getType() {
	return (this->_type);
}