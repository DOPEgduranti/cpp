/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:38:47 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/10 10:39:19 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Fraggy", FRAG_HP, FRAG_EP, FRAG_AD) {
	std::cout << "FragTrap default constructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str, FRAG_HP, FRAG_EP, FRAG_AD) {
	std::cout << "FragTrap string constructor has been called" << std::endl;
}

FragTrap::FragTrap( const FragTrap &other ) {
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_energyPoints = other.getEnergyPoints();
	this->_attackDamage = other.getAttackDamage();
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap default destructor has been called" << std::endl;
}

FragTrap &	FragTrap::operator=( FragTrap const &rhs ) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

void FragTrap::highFivesGuys( void ) {
	if (this->_hitPoints <= 0) {
		std::cout << "FragTrap " << this->getName() << " has been defeated.. It cannot smash high fives anymore :(" << std::endl;
		return ;
	}
	std::string answer;
	std::cout << "FragTrap " << this->getName() << " sand you a high five request.\nWould you accept: (yes/no)" << std::endl;
	do {
		std::getline(std::cin >> std::ws, answer);
		if (std::cin.eof())
			exit(1);
	} while (answer.empty());
	for (size_t i = 0; i < answer.length(); i++)
		answer[i] = std::toupper(((answer.c_str())[i]));
	if (answer == "YES" || answer == "Y")
		std::cout << "* EPIC CLAP SOUND *\nFragTrap " << this->getName() << " and you smashed the most epic high five ever!" << std::endl;
	else if (answer == "NO" || answer == "N")
		std::cout << "* VERY SAD NOISES *\nFragTrap " << this->getName() << " is no more your friend.." << std::endl;
	else
		std::cout << "* CONFUSED NOISES *\nFragTrap " << this->getName() << " cannot understand your unga bungas." << std::endl;
}
