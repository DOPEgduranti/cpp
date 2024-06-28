/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:44:38 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/20 12:38:15 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _execGrade;
	public:
		AForm();
		AForm(const std::string name, const int signGrade, const int execGrade);
		AForm(const AForm &other);
		virtual ~AForm();
		AForm & operator=(const AForm &other);
		std::string getName(void) const;
		bool getSigned(void) const;
		int getSignGrade(void) const;
		int getExecGrade(void) const;
		bool beSigned(Bureaucrat &bur);
		virtual void execute(const Bureaucrat &executor) const = 0;
		class GradeTooHighException: public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char* what() const throw();
		};
		class NotSignedExeption : public std::exception {
			const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream &outs, const AForm &other);

#endif