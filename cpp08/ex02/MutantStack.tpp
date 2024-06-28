/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:34:13 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/25 12:16:10 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack( void ) : std::stack<T>() {
	
}

template <typename T> MutantStack<T>::MutantStack( const MutantStack &rhs ) : std::stack<T>(rhs) {
	
}

template <typename T> MutantStack<T>::~MutantStack( void ) {
	
}

template <typename T> MutantStack<T> & MutantStack<T>::operator=( const MutantStack &rhs ) {
	if (this != &rhs)
		std::stack<T>::operator=(rhs);
	return (*this);
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}

template <typename T> typename MutantStack<T>::const_iterator MutantStack<T>:: cbegin() const {
	return this->c.begin();
}

template <typename T> typename MutantStack<T>::const_iterator MutantStack<T>:: cend() const {
	return this->c.end();
}

template <typename T> typename MutantStack<T>::reverse_iterator MutantStack<T>:: rbegin() {
	return this->c.rbegin();
}

template <typename T> typename MutantStack<T>::reverse_iterator MutantStack<T>:: rend() {
	return this->c.rend();
}

template <typename T> typename MutantStack<T>::const_reverse_iterator MutantStack<T>:: crbegin() const {
	return this->c.rbegin();
}

template <typename T> typename MutantStack<T>::const_reverse_iterator MutantStack<T>:: crend() const {
	return this->c.rend();
}

#endif