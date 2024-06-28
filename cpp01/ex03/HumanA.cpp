/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:14:25 by gduranti          #+#    #+#             */
/*   Updated: 2024/04/24 11:03:36 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weap) : _name(str), _weapon(weap) {
	
}

HumanA::~HumanA() {

}

std::string	HumanA::getName() const {
	return (this->_name);
}

void	HumanA::attack() {
	std::cout << this->getName() << " attacks with their " << this->_weapon.getType() << std::endl;
}