/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:30:43 by stephen           #+#    #+#             */
/*   Updated: 2025/10/24 12:20:27 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
#include <cstdlib>

# define CMD_ABORT 2

class Contact{
public:
	Contact(void);
	~Contact(void);
	void setFirstname(std::string fstname);
	void setLastname(std::string lstname);
	void setNickname(std::string nickname);
	void setPhone(std::string phone);
	void setSecret(std::string secret);

	std::string getFirstname();
	std::string getLastname();
	std::string getNickname();
	std::string getPhone();
	std::string getSecret();

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone;
	std::string _secret;
};

#endif
