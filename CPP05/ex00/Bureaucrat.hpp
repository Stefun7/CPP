/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:49:31 by scesar            #+#    #+#             */
/*   Updated: 2026/01/28 18:57:34 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

class Bureaucrat{
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat &B);
	Bureaucrat(std::string name);
	~Bureaucrat();

	Bureaucrat& operator=(Bureaucrat const &B);

	std::string getName();
	std::string getGrade();

	void GradeTooHighException();
	void GradeTooLowException();

	std::ostream& operator<<(Bureaucrat const &B);

private:
	std::string const _name;
	int _grade;
};
