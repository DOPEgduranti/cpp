/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:20:55 by gduranti          #+#    #+#             */
/*   Updated: 2024/04/22 12:02:53 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "utils.hpp"

bool check__phone_number(std::string nbr) {
	if (nbr.empty())
		return (false);
	if (nbr[0] != '+' && !(nbr[0] >= '0' && nbr[0] <= '9')) {
		return (false);
	}
	for (unsigned long i = 1; i < nbr.length(); i++)
		if (nbr[i] < '0' || nbr[i] > '9')
			return (false);
	return (true);
}

std::string	cut_ten(std::string str) {
	int	j = 10;
	std::string	dst = "          ";
	if (str.length() <= 10)	{
		for (unsigned long i = 0; i <= str.length(); i++)
			dst[j--] = str[str.length() - i];
	}
	else {
		dst = "         .";
		for (int i = 0; i < 9; i++)
			dst[i] = str[i];
	}
	return (dst);
}
