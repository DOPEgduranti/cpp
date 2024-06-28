/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:21:55 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/24 11:30:29 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename Sp> void swap(Sp &a1, Sp &a2) {
	Sp tmp = a1;
	a1 = a2;
	a2 = tmp;
}

template <typename Mn> Mn min (Mn a1, Mn a2) {
	if (a1 < a2)
		return (a1);
	return (a2);
}

template <typename Mx> Mx max (Mx a1, Mx a2) {
	if (a1 > a2)
		return (a1);
	return (a2);
}

#endif