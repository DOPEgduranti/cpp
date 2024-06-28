/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:12:44 by gduranti          #+#    #+#             */
/*   Updated: 2024/04/23 10:45:17 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
	
# include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie();
	Zombie(const Zombie &other);
	~Zombie();
	std::string	getName(void) const;
	void		setName(std::string str);
	void		announce(void);
};

Zombie*	newZombie(std::string name);
void 	randomChump( std::string name );
	
#endif