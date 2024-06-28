/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:57:57 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 11:37:33 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T> Array<T>::Array(void) : _len(1) {
	this->_arr = new T[1];
	this->_arr[0] = 0;
};

template <typename T> Array<T>::Array(unsigned int n) : _len(n) {
	this->_arr = new T[n];
	for (size_t i = 0; i < n; i++)
		this->_arr[i] = 0;
};

template <typename T> Array<T>::Array(const Array &other) : _len(other._len) {
	this->_arr = new T[other._len];
	for (size_t i = 0; i < this->_len; i++)
		this->_arr[i] = other._arr[i];
};

template <typename T> Array<T>::~Array(void) {
	delete[] this->_arr;
};

template <typename T> Array<T> & Array<T>::operator=(Array &other) {
	if (this == &other)
		return (*this);
	this->_len = other._len;
	if (this->_arr)
		delete[] this->_arr;
	this->_arr = new T[other._len];
	for (size_t i = 0; i < this->_len; i++)
		this->_arr[i] = other._arr[i];
	return (*this);
};

template <typename T> T & Array<T>::operator[](const unsigned int i) {
	if (i >= this->_len)
		throw ExceedingArraySizeException();
	return (this->_arr[i]);
};

template <typename T> size_t Array<T>::size(void) {
	return this->_len;
};

#endif