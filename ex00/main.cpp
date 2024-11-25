/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:00:30 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/25 20:56:18 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Animal.hpp"
#include "includes/Cat.hpp"

int	main( void ) {

	Animal	*a = new Cat;
	std::cout << a->getType() << std::endl;
	a->makeSound();
	delete a;
}