/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:34:56 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/10 10:41:24 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#define FRAG_HP 100
#define FRAG_EP 100
#define FRAG_AD 30

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap( void );
	FragTrap( std::string str );
	FragTrap( const FragTrap &other );
	~FragTrap( void );

	FragTrap &	operator=( FragTrap const &rhs );

	void highFivesGuys( void );
};

#endif