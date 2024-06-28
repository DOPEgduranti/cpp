/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:05:16 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 11:36:42 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

# include <cstdlib>

int main(void) {
	try
	{
		Array<int> ar;
		ar[0] = 43;
		std::cout << ar[0] << std::endl;
		Array<int> ar2;
		ar2 = ar;
		std::cout << ar2;
		
		Array<char> ar_ch(5);
		ar_ch[0] = 'c';
		ar_ch[1] = 'i';
		ar_ch[2] = 'a';
		ar_ch[3] = 'o';
		std::cout << ar_ch[0] << std::endl;
		Array<char> ar_ch2(ar_ch);
		std::cout << ar_ch2;
		
		// int * a = new int();
		// std::cout << a[0] << std::endl;
		// delete a;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}