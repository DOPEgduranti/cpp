/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:34:26 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/09 09:50:32 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ( void ) {
	ScavTrap t0("giio");
	
	t0.beRepaired(10);
	t0.beRepaired(1);
	t0.attack("caio");
	t0.takeDamage(15);
	t0.takeDamage(5);
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
	return (0);
}