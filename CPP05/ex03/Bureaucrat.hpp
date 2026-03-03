/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:49:31 by scesar            #+#    #+#             */
/*   Updated: 2026/02/18 17:51:19 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat{
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &B);
	Bureaucrat(std::string name);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	Bureaucrat& operator=(Bureaucrat const &B);

	std::string getName() const;
	int getGrade() const;

	void UpGrade();
	void DownGrade();
	void signForm(AForm& F);
	void executeForm(AForm const &F);

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};

private:
	std::string const _name;
	int _grade;
};

//need to understand << overload better
std::ostream& operator<<(std::ostream &o, Bureaucrat const &B);