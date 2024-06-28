/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 10:00:37 by gduranti          #+#    #+#             */
/*   Updated: 2024/05/07 11:25:30 by gduranti         ###   ########.fr       */
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
	Fixed	operator+( Fixed const &rhs ) const;
	Fixed	operator-( Fixed const &rhs ) const;
	Fixed	operator*( Fixed const &rhs ) const;
	Fixed	operator/( Fixed const &rhs ) const;

	bool	operator>( Fixed const &rhs ) const;
	bool	operator<( Fixed const &rhs ) const;
	bool	operator>=( Fixed const &rhs ) const;
	bool	operator<=( Fixed const &rhs ) const;
	bool	operator==( Fixed const &rhs ) const;
	bool	operator!=( Fixed const &rhs ) const;

	Fixed &	operator++( void );
	Fixed &	operator--( void );
	Fixed	operator++( int );
	Fixed	operator--( int );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	
	static Fixed & min( Fixed &first, Fixed &second );
	static const Fixed & min( const Fixed &first, const Fixed &second );
	static Fixed & max( Fixed &first, Fixed &second );
	static const Fixed & max( const Fixed &first, const Fixed &second );
};

std::ostream & operator<<( std::ostream & outs, Fixed const & rhs);

#endif