/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:43:39 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/24 11:16:44 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib> 
#include <ctime> 

Base * generate(void) {
	int i = rand() % 3;

	switch (i) {
	case 0:
		return (new A);
		break ;
		
	case 1:
		return (new B);
		break ;
		
	case 2:
		return (new C);
		break ;
		
	default:
		return (NULL);
		break;
	}
}

void identify(Base* p) {
	std::cout << "pointer base is: ";
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cerr << "Error occours" << std::endl;
}

void identify(Base& p) {
	std::cout << "reference base is: ";
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C &c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << "Error occours" << std::endl;
			}
			
		}
		
	}
	
}

int main (void) {
	srand(unsigned(time(0)));
	Base *b1 = generate();
	Base *b2 = generate();
	Base *b3 = generate();
	Base *b4 = generate();

	identify(b1);
	identify(*b1);
	identify(b2);
	identify(*b2);
	identify(b3);
	identify(*b3);
	identify(b4);
	identify(*b4);
}