/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:08:00 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 11:55:57 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool ft_isoperator( int c ) {
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

bool inputCheck(std::string str) {
	int nDigit = 0;
	int nOperator = 0;
	for (size_t i = 0; i < str.size(); i++) {
		if (std::isdigit(str[i]))
			nDigit++;
		else if (ft_isoperator(str[i])) {
			nOperator++;
			if (nOperator > 0 && nDigit == 0)
				return false;
		}
		else if (!std::isspace(str[i]))
			return false;
	}
	if (nDigit != nOperator + 1)
		return false;
	return true;
}

void RPN::calculate( std::string str ) {
	if (str.empty()) {
		std::cerr << "Error" << std::endl;
		return ;
	}
	if (inputCheck(str) == false) {
		std::cerr << "Error" << std::endl;
		return ;
	}
	std::stack<double> myStack;
	for (size_t i = 0; i < str.size(); i++) {
		if (std::isspace(str[i]))
			continue ;
		if (std::isdigit(str[i]))
			myStack.push(str[i] - '0');
		if (ft_isoperator(str[i])) {
			double b = myStack.top();
			myStack.pop();
			double a = myStack.top();
			myStack.pop();
			switch (str[i]) {
			case '+':
				myStack.push(a + b);
				continue ;
			case '-':
				myStack.push(a - b);
				continue ;
			case '*':
				myStack.push(a * b);
				continue ;
			case '/':
				if (b == 0) {
					std::cerr << "Error: division by 0." << std::endl;
					return ;
				}
				myStack.push(a / b);
				continue ;
			default:
				continue ;
			}
		}
	}
	std::cout << myStack.top() << std::endl;
}
