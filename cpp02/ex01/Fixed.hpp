/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:00:37 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/07 11:07:09 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
	int _value;
	static const int _bits = 8;

public:
	Fixed( void );
	Fixed( int const nbr );
	Fixed( float const nbr );
	Fixed( Fixed const &other );
	~Fixed( void );
	
	Fixed &	operator=( Fixed const &rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream & operator<<( std::ostream & outs, Fixed const & rhs);

#endif