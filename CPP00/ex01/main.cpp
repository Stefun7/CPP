/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 23:38:35 by stephen           #+#    #+#             */
/*   Updated: 2025/10/24 13:32:22 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void){
	PhoneBook Pb;
	std::string	cmd;

	while(1)
	{
		if(!std::getline(std::cin, cmd)){
			std::cout << "ending program..." << std::endl;
			return(1);
		}
		else if(cmd == "ADD")
			Pb.addcontact();
		else if(cmd == "SEARCH")
			Pb.searchcontact();
		else if(cmd == "EXIT")
			return(0);
		else
			std::cout << "Unrecognized option. ADD, SEARCH and EXIT are the only commands availabe" << std::endl;
	}
}
