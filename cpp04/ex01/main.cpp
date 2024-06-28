/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 09:54:23 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/13 11:54:59 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// Animal *anim[10];
	// for (int i = 0; i < 10; i++) {
	// 	if (i < 5)
	// 		anim[i] = new Dog();
	// 	else
	// 		anim[i] = new Cat();
	// }
	// for (int i = 0; i < 10; i++)
	// 	delete anim[i];
	Dog ciccio;
	{
		Dog tmp;
		tmp = ciccio;
	}
	return (0);
}