/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:38:01 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/24 11:44:14 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename Ir, typename Fc> void iter(Ir* arr, size_t len, Fc f) {
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif