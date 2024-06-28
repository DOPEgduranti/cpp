/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:38:06 by gduranti          #+#    #+#             */
/*   Updated: 2024/04/23 11:48:20 by gduranti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "utils.hpp"

class PhoneBook {
private:
	int		_index;
	Contact	_contacts[8];
public:
	PhoneBook(void);
	PhoneBook(const PhoneBook &other);
	~PhoneBook(void);
	void	add_contact(void);
	void	search_contact(void);
};

#endif