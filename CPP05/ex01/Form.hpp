/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 00:59:34 by stephen           #+#    #+#             */
/*   Updated: 2026/02/10 21:48:04 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
public:
	Form();
	Form(Form &F);
	Form(std::string name);
	Form(std::string name, int gr_to_sign, int gr_to_exec);
	~Form();

	Form& operator=(Form const &F);

//getters
	std::string getName() const;
	int getGr_to_Sign() const;
	int getGr_to_Exec() const;
	std::string getSigned() const;

	void	beSigned(Bureaucrat const &B) ;

	class GradeTooHighException : public std::exception{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:
		const char *what() const throw();
	};
private:
	std::string const _name;
	int _gr_to_sign;
	int _gr_to_exec;
	bool _is_signed;
};

std::ostream & operator<<(std::ostream &o, Form const &F);