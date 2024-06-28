/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:07:40 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/13 10:23:12 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal( void );
	WrongAnimal( const std::string str );
	WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal( void );
	
	WrongAnimal & operator=( const WrongAnimal &rhs );

	std::string getType( void ) const;
	virtual void makeSound( void ) const;
};

#endif