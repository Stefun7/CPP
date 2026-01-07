/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephen <stephen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 01:12:19 by stephen           #+#    #+#             */
/*   Updated: 2026/01/07 01:43:12 by stephen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain{
public:
	Brain();
	Brain(const Brain &B);
	~Brain();

	Brain &operator=(const Brain &B);

//getter
	std::string getIdea(unsigned int index) const;

//setter
	void setIdea(unsigned int index, std::string idea);

private:
	std::string _ideas[100];
};

#endif