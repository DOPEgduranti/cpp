/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:34:26 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/10 10:40:09 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ( void ) {
	FragTrap t0("ciccio");
	
	t0.beRepaired(10);
	t0.beRepaired(1);
	t0.attack("caio");
	t0.takeDamage(15);
	t0.takeDamage(50);
	t0.beRepaired(10);
	t0.attack("caio");
	t0.attack("caio");
	t0.attack("caio");
	t0.attack("caio");
	t0.attack("caio");
	t0.attack("caio");
	t0.attack("caio");
	t0.attack("caio");
	t0.beRepaired(1);
	t0.attack("caio");
	t0.highFivesGuys();
	return (0);
}