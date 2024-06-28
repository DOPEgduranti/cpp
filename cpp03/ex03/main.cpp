/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:34:26 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/10 10:55:04 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ( void ) {
	DiamondTrap t0("ciccio");
	
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
	t0.guardGate();
	t0.highFivesGuys();
	t0.whoAmI();
	return (0);
}