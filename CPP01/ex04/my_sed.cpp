/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:26:20 by scesar            #+#    #+#             */
/*   Updated: 2025/10/31 12:56:06 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_sed.hpp"

bool	valid_args(int ac, char **av){
	if(ac != 4){
		std::cout << "Wrong number of argument. Need exactly 3 param." << std::endl;
		return(false);
	}

	std::string s1 = av[2];
	std::string s2 = av[3];
	if(s1.empty() || s2.empty()){
		std::cout << "Can't have empty string(s)" << std::endl;
		return(false);
	}

	return true;
}

int	main(int ac, char **av){
	if(!valid_args(ac, av))
		return(1);

	std::ifstream src(av[1]);
	if(!src.is_open()){
		std::cout << "Can't open file" << std::endl;
		return(1);
	}

	std::string path = static_cast<std::string>(av[1]) + ".replace";
	std::ofstream dst(path.c_str());
	if(!dst.is_open()){
		std::cout << "Can't create file" << std::endl;
		src.close();
		return(1);
	}

	std::string	line;
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	while(std::getline(src, line))
	{
		size_t	here = 0;
		while ((here = line.find(s1)) != std::string::npos)
		{
			line.erase(here, s1.size());
			line.insert(here, s2);
			here += s2.size();
		}
		dst << line << std::endl;
	}

	src.close();
	dst.close();
	return(0);
}
