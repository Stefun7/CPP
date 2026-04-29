/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:44:54 by scesar            #+#    #+#             */
/*   Updated: 2026/04/29 18:58:50 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <fstream>
# include <exception>
# include <map>

class InvalidFile : public std::exception{
	const char* what() const throw();
};

class WrongFormat : public std::exception{
	const char* what() const throw();
};

class InvalidDate : public std::exception{
	const char* what() const throw();
};

class InvalidValue : public std::exception{
	const char* what() const throw();
};

std::map<std::string, float> csv_parser();
