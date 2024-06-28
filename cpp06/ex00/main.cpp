/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:35:16 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/21 16:13:46 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: wrong number of arguments" << std::endl; 
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
