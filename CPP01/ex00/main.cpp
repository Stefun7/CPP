/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scesar <scesar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:29:31 by scesar            #+#    #+#             */
/*   Updated: 2026/01/05 18:26:52 by scesar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int	main(void){
	Zombie *on_heap = newZombie("Bob");
	Zombie on_stack = Zombie("Patrick");
	randomChump("Sandy");

	on_heap->announce();
	delete(on_heap);

	on_stack.announce();
	return 0;
}
