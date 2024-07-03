/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:28:57 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/25 11:10:54 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {

};

Span::Span(unsigned int n) : _size(n) {
	this->_vec.reserve(n);
};

Span::Span(const Span &other) : _vec(other._vec), _size(other._size) {

};

Span::~Span(void) {

};

Span & Span::operator=(const Span &other) {
	this->_vec = other._vec;
	this->_size = other._size;
	return *this;
};

void Span::addNumber(const int i) {
	if (this->_vec.size() >= this->_size)
		throw OutOfRangeException();
	_vec.push_back(i);
};

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	if (end < start)
		return ;
	if (this->_vec.size() + std::distance(start, end) > this->_size)
		throw OutOfRangeException();
	this->_vec.insert(this->_vec.end(), start, end);
};

int Span::shortestSpan() {
	if (this->_vec.size() < 2)
		throw NotEnoughElementsException();
	std::sort(this->_vec.begin(), this->_vec.end());
	int min = *std::max_element(this->_vec.begin(), this->_vec.end());
	int max = *std::min_element(this->_vec.begin(), this->_vec.end());
	int span = std::abs(max - min);
	for (size_t i = 0; i < this->_vec.size() - 1; i++) {
		if (std::abs(this->_vec[i] - this->_vec[i + 1]) < span)
			span = std::abs(this->_vec[i] - this->_vec[i + 1]);
	}
	return span;
};

int Span::longestSpan() {
	if (this->_vec.size() < 2)
		throw NotEnoughElementsException();
	int min = *std::max_element(this->_vec.begin(), this->_vec.end());
	int max = *std::min_element(this->_vec.begin(), this->_vec.end());
	return (std::abs(max - min));
};

