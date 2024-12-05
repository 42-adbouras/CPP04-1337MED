/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:00:30 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/05 13:33:18 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongCat.hpp"

void	intra_main( void ) {
	const Animal*	meta	= new Animal();
	const Animal*	j 		= new Dog();
	const Animal*	i		= new Cat();

	std::cout << i->getType() << ": "; i->makeSound(); //will output the cat sound!
	std::cout << j->getType() << ": "; j->makeSound();
	std::cout << meta->getType() << ": "; meta->makeSound();
	delete meta;
	delete i;
	delete j;
}

void	wrong_animal( void ) {
	const WrongAnimal*	wrongMeta	= new WrongAnimal;
	const WrongAnimal*	wrongCat	= new WrongCat;

	std::cout << wrongMeta->getType() << ": "; wrongMeta->makeSound();
	std::cout << wrongCat->getType() << ": "; wrongCat->makeSound();

	delete wrongMeta; delete wrongCat;
}

void	print_header( str arg ) {
	std::cout << "\n=============== ";
	std::cout << arg;
	std::cout << " ===============\n" << std::endl;
}
int	main( void ) {
	print_header("main");
	intra_main();
	
	print_header("Wrong Animals");
	wrong_animal();

	print_header("leaks");
	system("leaks -q animals.exe");
}
