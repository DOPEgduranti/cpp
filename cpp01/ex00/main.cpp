/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:43:10 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/06 11:34:36 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie* zmb1 = newZombie("pippo");
	randomChump("marcolino");
	zmb1->announce();
	delete zmb1;
	return (0);
}