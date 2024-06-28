/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:34:56 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/10 10:44:10 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap( void );
	DiamondTrap( std::string str );
	DiamondTrap( const DiamondTrap &other );
	~DiamondTrap( void );

	DiamondTrap &	operator=( DiamondTrap const &rhs );

	std::string getName( void ) const;
	
	void attack(const std::string& target);
	void whoAmI( void );
};

#endif