/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:34:26 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/08 12:52:27 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ( void ) {
	ClapTrap t0;
	
	t0.beRepaired(1);
	t0.beRepaired(1);
	t0.attack("caio");
	t0.takeDamage(5);
	t0.beRepaired(1);
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
	return (0);
}