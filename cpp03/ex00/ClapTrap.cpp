/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:38:47 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/09 15:31:22 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("Trappy"), _hitPoints(HITPOINTS), _energyPoints(ENERGYPOINTS), _attackDamage(ATTACKDAMAGE) {
	std::cout << "ClapTrap default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap( std::string str) : _name(str), _hitPoints(HITPOINTS), _energyPoints(ENERGYPOINTS), _attackDamage(ATTACKDAMAGE) {
	std::cout << "ClapTrap string constructor has been called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &other ) : _name(other.getName()), _hitPoints(other.getHitPoints()), _energyPoints(other.getEnergyPoints()), _attackDamage(other.getAttackDamage()) {
	std::cout << "ClapTrap copy constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap default destructor has been called" << std::endl;
}

std::string	ClapTrap::getName ( void ) const {
	return (this->_name);
}

int	ClapTrap::getHitPoints ( void ) const {
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints ( void ) const {
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage ( void ) const {
	return (this->_attackDamage);
}

void ClapTrap::attack(const std::string& target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << "ClapTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " has " << this->_energyPoints << " energy points left and " << this->_hitPoints << " hit points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->getName() << " has been defeated time ago!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " suffers " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->getName() << " has been defeated!" << std::endl;
		this->_hitPoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints -= 1;
		if (this->_hitPoints < HITPOINTS)
		{
			std::cout << "ClapTrap " << this->getName() << " heals for " << amount << " hit points!" << std::endl;
			this->_hitPoints += amount;
			if (this->_hitPoints > HITPOINTS)
				this->_hitPoints = HITPOINTS;
		}
		else 
			std::cout << "ClapTrap " << this->getName() << " has already " << this->_hitPoints << " hit points.. You wasted 1 energy point!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " has " << this->_energyPoints << " energy points left and " << this->_hitPoints << " hit points left!" << std::endl;
}