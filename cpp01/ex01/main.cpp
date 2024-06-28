/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:43:10 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/06 11:37:21 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	int	nbr = 10;
	Zombie	*zmb1 = zombieHorde(nbr, "pippo");

	if (zmb1)
		for (int i = 0; i < nbr; i++)
			zmb1[i].announce();
	delete[] zmb1;
	return (0);
}