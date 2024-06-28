/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:07:40 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/13 10:21:00 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	Animal( void );
	Animal( const std::string str );
	Animal(const Animal &other);
	virtual ~Animal( void );
	
	Animal & operator=( const Animal &rhs );

	std::string getType( void ) const;
	virtual void makeSound( void ) const;
};

#endif