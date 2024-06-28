/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:04:14 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/26 16:46:16 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int argc, char **argv ) {
	if (argc != 2) {
		std::cerr << "Error" << std::endl;
		return 1;
	}
	RPN::calculate(argv[1]);
	return 0;
}