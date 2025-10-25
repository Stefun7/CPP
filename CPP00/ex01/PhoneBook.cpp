/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 01:21:13 by stephen           #+#    #+#             */
/*   Updated: 2025/10/24 13:33:03 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdio.h>

//don't treat empty field yet !!
PhoneBook::PhoneBook() : _howmany(0){
}

PhoneBook::~PhoneBook(){
}

void	PhoneBook::shift_up(){
	for(size_t i = 0; i < 7; i++)
		this->_tab[i] = this->_tab[i + 1];
}

void	PhoneBook::addcontact(){
	Contact Who;
	std::string input;

	std::cout << "First name : ";
	Who.setFirstname(input);

	std::cout << "Last name : ";
	Who.setLastname(input);

	std::cout << "Nickname : ";
	Who.setNickname(input);

	std::cout << "Phone number : ";
	Who.setPhone(input);

	std::cout << "Darkest secret : ";
	Who.setSecret(input);

	if(this->_howmany == 8){
		shift_up();
		this->_tab[7] = Who;
	}
	else{
		this->_tab[_howmany] = Who;
		this->_howmany ++;
	}
}

void print_field(const std::string str){
	if (str.length() > 10){
		for (size_t i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	else{
		for (size_t i = 0; i < 10 - str.length(); i++)
			std::cout << " ";
		std::cout << str;
	}
}

void	PhoneBook::searchcontact(){
	if(this->_howmany == 0){
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICKNAME  |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (size_t i = 0; i < this->_howmany; i++){
		std::cout << "|";
		std::cout << std::string(8, ' ') << (i + 1);
		std::cout << "|";
		print_field(this->_tab[i].getFirstname());
		std::cout << "|";
		print_field(this->_tab[i].getLastname());
		std::cout << "|";
		print_field(this->_tab[i].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "Enter index : ";
	std::string input;
	std::getline(std::cin, input);
	std::cout << std::endl;
	if(input.empty()){
		std::cout << "Nothing inputed. Operation canceled." << std::endl;
		return;
	}
	if(input.size() == 1 && isdigit(input[0])){
		size_t index = input[0] - '0';
		if(index > 8)
			std::cout << "Index out of range, please try another one between 1 and 8." << std::endl;
		else if(index > this->_howmany || index == 0)
			std::cout << "Invalid index, only " << this->_howmany << " contact(s) in Phonebook yet." << std::endl;
		else{
			Contact& C = this->_tab[index - 1];
			std::cout << "Contact n°" << index << " informations" << std::endl ;
			std::cout << "------------------------" << std::endl;
			std::cout << "First name : " << C.getFirstname() << std::endl;
			std::cout << "Last name : " << C.getLastname() << std::endl;
			std::cout << "Nickname : " << C.getNickname() << std::endl;
			std::cout << "Phonenumber : " << C.getPhone() << std::endl;
			std::cout << "Darkest secret : " << C.getSecret() << std::endl;
		}
	}
	else
		std::cout << "Wrong index format, please choose a number between 0 and 7" << std::endl;

}
