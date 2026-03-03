/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:23:24 by stephen           #+#    #+#             */
/*   Updated: 2026/02/20 12:44:20 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &P);
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(PresidentialPardonForm const &P);

	void action() const;

private:
	std::string _target;
};