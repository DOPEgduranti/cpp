/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:53:26 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/24 16:22:52 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundExeption : public std::exception {
public:
	virtual const char* what() const throw() {
		return ("Number not found");
	}
};

template <typename T> typename T::iterator easyfind(T arg, int i) {
	typename T::iterator ite = std::find(arg.begin(), arg.end(), i);
	if (ite == arg.end())
		throw NotFoundExeption();
	return (ite);
}

#endif