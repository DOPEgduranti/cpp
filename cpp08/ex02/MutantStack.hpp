/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:15:18 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/25 12:21:49 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template <typename T> class MutantStack : public std::stack<T> {
public:
	MutantStack( void );
	MutantStack( const MutantStack &rhs );
	~MutantStack( void );
	MutantStack & operator=( const MutantStack &rhs );
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	iterator begin();
	iterator end();
	const_iterator cbegin() const;
	const_iterator cend() const;
	reverse_iterator rbegin();
	reverse_iterator rend();
	const_reverse_iterator crbegin() const;
	const_reverse_iterator crend() const;
};

# include "MutantStack.tpp"

#endif