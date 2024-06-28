/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:35:53 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/13 12:37:17 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* _brain;
public:
	Dog( void );
	Dog( const Dog &other );
	~Dog( void );

	Dog & operator=( const Dog &rhs );

	Brain & getBrain( void ) const;
	void makeSound( void ) const;
};

#endif