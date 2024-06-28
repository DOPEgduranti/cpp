/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:22:27 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 11:27:20 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main (void) {
	Data ptr = {"ciao", 42};
	uintptr_t ciccio;
	Data *aaa;
	
	std::cout << "data: " << &ptr << ", " << ptr.str << ", " << ptr.i << std::endl;
	ciccio = Serializer::serialize(&ptr);
	std::cout << "serialized: " << ciccio << std::endl;
	aaa = Serializer::deserialize(ciccio);
	std::cout << "deserialized: " << aaa << ", " << aaa->str << ", " << aaa->i << std::endl;
}