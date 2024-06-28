/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:20:38 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 11:44:13 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int main(void) {
	try {
	srand(unsigned(time(0)));
	Span sp = Span(10000);
	std::vector<int> v;
	std::srand(time(NULL));
	for (int i = 0; i < 10000; i++) {
		v.push_back(rand() % 10000000);
	}
	sp.addNumber(v.begin(), v.end());
	sp.addNumber(0);
	sp.addNumber(23);
	sp.addNumber(15);
	sp.addNumber(1);
	sp.addNumber(0);
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}