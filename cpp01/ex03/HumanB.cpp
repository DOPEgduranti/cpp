/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:14:25 by gduranti          #+#    #+#             */
/*   Updated: 2024/04/24 11:05:13 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) : _name(str), _weapon(NULL) {
	
}

HumanB::~HumanB() {
	
}

std::string	HumanB::getName() const {
	return (this->_name);
}

void	HumanB::setWeapon(Weapon &weap) {
	this->_weapon = &weap;
}

void	HumanB::attack() {
	if (this->_weapon)
		std::cout << this->getName() << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->getName() << " attacks with their bare hands" << std::endl;
}