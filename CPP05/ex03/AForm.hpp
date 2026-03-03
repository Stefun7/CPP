/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 00:59:34 by stephen           #+#    #+#             */
/*   Updated: 2026/02/18 17:50:56 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
public:
	AForm();
	AForm(AForm const &F);
	AForm(std::string name, int gr_to_sign, int gr_to_exec);
	virtual ~AForm();

	AForm& operator=(AForm const &F);

//getters
	std::string getName() const;
	int getGr_to_Sign() const;
	int getGr_to_Exec() const;
	std::string getSigned() const;

	void	beSigned(Bureaucrat const &B) ;
	void	execute(Bureaucrat const &executor) const;

	class GradeTooHighException : public std::exception{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:
		const char *what() const throw();
	};
	class FormNotSignedException : public std::exception {
		const char* what() const throw();
	};

protected:
	virtual void action() const = 0;

private:
	std::string const _name;
	int _gr_to_sign;
	int _gr_to_exec;
	bool _is_signed;
};

std::ostream & operator<<(std::ostream &o, AForm const &F);