/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:42:50 by gduranti          #+#    #+#             */
/*   Updated: 2024/06/28 11:13:48 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	private:
		class FormTypeException : public std::exception {
			const char * what() const throw() {
				return "Form type does not exists.";
			}
		};
	public:
		Intern(void);
		Intern(const Intern & other);
		~Intern(void);
		Intern & operator=(const Intern & other);
		AForm * makeForm(const std::string formName, const std::string formTarget);
};

#endif