/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:51:06 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/24 15:32:59 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T> class Array {
private:
	T* _arr;
	size_t _len;
	class ExceedingArraySizeException: public std::exception {
		const char* what() const throw() {
			return ("Error: you are exceeding the array size");
		};
	};
public:
	Array(void);
	Array(unsigned int n);
	Array(const Array &other);
	~Array(void);
	Array & operator=(Array &other);
	T & operator[](const unsigned int i);
	size_t size(void);
};

template <typename T> std::ostream & operator<<(std::ostream &outs, Array<T> &other) {
	for (size_t i = 0; i < other.size(); i++)
		outs << "[" << i << "]: '" << other[i] << "'" << std::endl;
	return (outs);
};

#include "Array.tpp"

#endif