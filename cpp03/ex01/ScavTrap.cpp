/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:38:47 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/10 10:38:15 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Scavy", SCAV_HP, SCAV_EP, SCAV_AD), _gateKeeper(false) {
	std::cout << "ScavTrap default constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str, SCAV_HP, SCAV_EP, SCAV_AD), _gateKeeper(false) {
	std::cout << "ScavTrap string constructor has been called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &other ) {
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_hitPoints = other.getMaxHP();
	this->_energyPoints = other.getEnergyPoints();
	this->_attackDamage = other.getAttackDamage();
	this->_gateKeeper = other.getGateKeeper();
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap default destructor has been called" << std::endl;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const &rhs ) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_hitPoints = rhs.getMaxHP();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	this->_gateKeeper = rhs.getGateKeeper();
	return (*this);
}

bool ScavTrap::getGateKeeper( void ) const {
	return (this->_gateKeeper);
}

void ScavTrap::attack(const std::string& target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
	else
		std::cout << "ScavTrap " << this->getName() << " has " << this->_energyPoints << " energy points left and " << this->_hitPoints << " hit points left!" << std::endl;
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode!" << std::endl;
	this->_gateKeeper = true;
}