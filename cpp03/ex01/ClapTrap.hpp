/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:34:56 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/10 10:28:13 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#define CLAP_HP 10
#define CLAP_EP 10
#define CLAP_AD 0

#include <iostream>

class ClapTrap
{
protected:
	std::string _name;
	int _hitPoints;
	int _maxHP;
	int _energyPoints;
	int _attackDamage;
	ClapTrap( const std::string str, const unsigned int hp, const unsigned int ep, const unsigned int ad );
public:
	ClapTrap( void );
	ClapTrap( const std::string str );
	ClapTrap( const ClapTrap &other );
	~ClapTrap();

	ClapTrap &	operator=( ClapTrap const &rhs );

	std::string	getName ( void ) const;
	int	getHitPoints ( void ) const;
	int	getEnergyPoints ( void ) const;
	int	getMaxHP ( void ) const;
	int	getAttackDamage ( void ) const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif