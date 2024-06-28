/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:30:52 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 10:44:05 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int argc, char **argv ) {
	if (argc < 2) {
		std::cerr << "Error: insert at least 1 positive integers'" << std::endl;
		return 1;
	}
	PmergeMe::merge(argc, argv);
}