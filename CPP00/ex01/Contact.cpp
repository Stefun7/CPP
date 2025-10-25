/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:28:39 by stephen           #+#    #+#             */
/*   Updated: 2025/10/24 13:29:58 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

//setters
void	Contact::setFirstname(std::string first){
	if(!std::getline(std::cin, first))
	{
		std::cout << std::endl << "ending program..." << std::endl;
			exit(CMD_ABORT);
	}
	while(first.empty())
	{
		std::cout << "Nothing inputed, contact can't have empty field. Please try again." << std::endl;
		std::cout << "First name : ";
		if(!std::getline(std::cin, first))
		{
			std::cout << std::endl << "ending program..." << std::endl;
			exit(CMD_ABORT);
		}
	}
	this->_first_name = first;
}

void	Contact::setLastname(std::string last){
	if(!std::getline(std::cin, last))
	{
		std::cout << std::endl << "ending program..." << std::endl;
			exit(CMD_ABORT);
	}
	while(last.empty())
	{
		std::cout << "Nothing inputed, contact can't have empty field. Please try again." << std::endl;
		std::cout << "Last name : ";
		if(!std::getline(std::cin, last))
		{
			std::cout << std::endl << "ending program..." << std::endl;
			exit(CMD_ABORT);
		}
	}
	this->_last_name = last;
}

void	Contact::setNickname(std::string nick){
	if(!std::getline(std::cin, nick))
	{
		std::cout << std::endl << "ending program..." << std::endl;
		exit(CMD_ABORT);
	}
	while(nick.empty())
	{
		std::cout << "Nothing inputed, contact can't have empty field. Please try again." << std::endl;
		std::cout << "Nickname : ";
		if(!std::getline(std::cin, nick))
		{
			std::cout << std::endl << "ending program..." << std::endl;
			exit(CMD_ABORT);
		}
	}
	this->_nickname = nick;
}

void	Contact::setPhone(std::string phone){
	if(!std::getline(std::cin, phone))
	{
		std::cout << std::endl << "ending program..." << std::endl;
		exit(CMD_ABORT);
	}
	while(phone.empty())
	{
		std::cout << "Nothing inputed, contact can't have empty field. Please try again." << std::endl;
		std::cout << "Phone number : ";
		if(!std::getline(std::cin, phone))
		{
			std::cout << std::endl << "ending program..." << std::endl;
			exit(CMD_ABORT);
		}
	}
	this->_phone = phone;
}

void	Contact::setSecret(std::string secret){
	if(!std::getline(std::cin, secret))
	{
		std::cout << std::endl << "ending program..." << std::endl;
			exit(CMD_ABORT);
	}
	while(secret.empty())
	{
		std::cout << "Nothing inputed, contact can't have empty field. Please try again." << std::endl;
		std::cout << "Darkest secret : ";
		if(!std::getline(std::cin, secret))
		{
			std::cout << std::endl << "ending program..." << std::endl;
			exit(CMD_ABORT);
		}
	}
	this->_secret = secret;
}

//getters
std::string	Contact::getFirstname(){
	return(this->_first_name);
}
std::string	Contact::getLastname(){
	return(this->_last_name);
}
std::string	Contact::getNickname(){
	return(this->_nickname);
}
std::string	Contact::getPhone(){
	return(this->_phone);
}
std::string	Contact::getSecret(){
	return(this->_secret);
}
