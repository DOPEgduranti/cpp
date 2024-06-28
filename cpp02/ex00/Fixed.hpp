/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:00:37 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/07 11:07:39 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
private:
	int _value;
	static const int _bits = 8;

public:
	Fixed( void );
	Fixed( Fixed const &other );
	~Fixed( void );
	
	Fixed &	operator=( Fixed const &rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif