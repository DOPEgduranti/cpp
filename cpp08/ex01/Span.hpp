/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:21:35 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/25 10:56:00 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {
private:
	std::vector<int> _vec;
	size_t _size;
	Span();
	class OutOfRangeException : public std::exception {
	public:
		virtual const char * what() const throw() {
			return ("Out of range");
		}
	};
	class NotEnoughElementsException : public std::exception {
	public:
		virtual const char * what() const throw() {
			return ("Not enough elements");
		}
	};
public:
	Span(unsigned int n);
	Span(const Span &other);
	~Span(void);
	Span & operator=(const Span &other);
	void addNumber(const int i);
	int shortestSpan();
	int longestSpan();
	std::vector<int>::iterator getStart( void ) { return _vec.begin(); }
	std::vector<int>::iterator getEnd( void ) { return _vec.end(); }
	void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
};

#endif