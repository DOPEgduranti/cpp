/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:38:47 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/09 16:10:06 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Clappy_clap_name", FRAG_HP, SCAV_EP, FRAG_AD), FragTrap(), ScavTrap(), _name("Diamondy") {
	std::cout << "DiamondTrap default constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str + "_clap_name", FRAG_HP, SCAV_EP, FRAG_AD), FragTrap(), ScavTrap(), _name(str) {
	std::cout << "DiamondTrap string constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other ) {
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_energyPoints = other.getEnergyPoints();
	this->_attackDamage = other.getAttackDamage();
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap default destructor has been called" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const &rhs ) {
	ClapTrap::operator=(rhs);
	this->_name = rhs.getName();
	return (*this);
}

std::string DiamondTrap::getName( void ) const {
	return (this->_name);
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}


void DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap " << this->getName() << " also called " << ClapTrap::getName() << " is glad to meet you!" << std::endl;
}
