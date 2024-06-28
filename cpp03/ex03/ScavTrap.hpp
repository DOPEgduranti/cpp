/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:34:56 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/10 10:51:12 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#define SCAV_HP 100
#define SCAV_EP 50
#define SCAV_AD 20

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
protected:
	bool _gateKeeper;
public:
	ScavTrap( void );
	ScavTrap( std::string str );
	ScavTrap( const ScavTrap &other );
	~ScavTrap( void );

	ScavTrap &	operator=( ScavTrap const &rhs );

	bool getGateKeeper( void ) const;

	void attack(const std::string& target);
	void guardGate( void );
};

#endif