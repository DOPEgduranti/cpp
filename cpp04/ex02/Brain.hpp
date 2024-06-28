/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:30:30 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/13 12:00:15 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain( void );
	Brain( const Brain &other );
	~Brain( void );

	Brain & operator=( const Brain &rhs );
};


#endif