/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:00:30 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/15 16:08:42 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"

// void	intra_main( void ) {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j;//should not create a leak
// 	delete i;
// }

void	deep_copy( void ) {
	// Exercice example
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;
	system("leaks animals.exe");
	std::cout << std::endl;
	std::cout << std::endl;

	// Proof of deep copy
	Dog medor;
	Cat fifi;

	Dog & medor_ref = medor;
	Cat & fifi_ref = fifi;

	std::cout << std::endl << "creating copies" << std::endl;
	Dog medor_copy(medor_ref);
	Cat fifi_copy(fifi_ref);

	Dog & medor_copy_ref = medor_copy;
	Cat & fifi_copy_ref = fifi_copy;

	std::cout << std::endl << "comparing" << std::endl;
	std::cout << medor.getBrain() << std::endl;
	std::cout << medor_copy_ref.getBrain() << std::endl;
	std::cout << fifi.getBrain() << std::endl;
	std::cout << fifi_copy_ref.getBrain() << std::endl;
	// medor.compareTo(medor_copy_ref);
	// fifi.compareTo(fifi_copy_ref);
	std::cout << std::endl;


	// Array of animals
	const Animal	*(animal_array[4]);
	std::cout << std::endl;
	// Half filled with dogs
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	// Half filled with cats
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;

	system("leaks animals.exe");
}

void	print_header( str arg ) {
	std::cout << "\n=============== ";
	std::cout << arg;
	std::cout << " ===============\n" << std::endl;
}


int main( void )
{
	deep_copy();
	while (1)
	;
}
