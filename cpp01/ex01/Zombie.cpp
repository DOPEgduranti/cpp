/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:20:12 by gduranti          #+#    #+#             */
/*   Updated: 2024/04/23 11:48:50 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	
}

Zombie::Zombie(const Zombie &other) : _name(other.getName()) {
	
}

Zombie::~Zombie() {
	std::cout << this->getName() << " has been slayed" << std::endl;
}

std::string	Zombie::getName(void) const {
	return (this->_name);
}

void		Zombie::setName(std::string str) {
	this->_name = str;
}

void	Zombie::announce() {
	std::cout << this->getName() << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}