/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:00:30 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/27 21:02:53 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"

int	main( void ) {

	Animal	*a = new Animal;
	std::cout << a->getType() << ": ";
	a->makeSound();
	delete a;
}
