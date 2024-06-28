/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:44:38 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/18 16:04:18 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _execGrade;
		class GradeTooHighException: public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char* what() const throw();
		};
	public:
		Form();
		Form(const std::string name, const bool sign, const int signGrade, const int execGrade);
		Form(const Form &other);
		~Form();
		Form & operator=(const Form &other);
		std::string getName(void) const;
		bool getSigned(void) const;
		int getSignGrade(void) const;
		int getExecGrade(void) const;
		bool beSigned(Bureaucrat &bur);
};

std::ostream & operator<<(std::ostream &outs, const Form &other);

#endif