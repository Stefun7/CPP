/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:34:15 by stephen           #+#    #+#             */
/*   Updated: 2025/09/25 17:02:56 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook{
public:
	PhoneBook(void);
	~PhoneBook(void);
	void addcontact();
	void searchcontact();
private:
	Contact	_tab[8];     //need to init them before ?
	size_t	_howmany;    //need to init them before ?
	void shift_up();
};
#endif