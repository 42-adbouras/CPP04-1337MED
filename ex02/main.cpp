/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:00:30 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/17 14:55:33 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"

void	intra_main( void ) {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
}

void	deepShallowCopy( void ) {
	Cat 	cat;
	cat.getBrain()->setIdeas("~Im hungry~");
	
	Cat 	catCopy(cat);
	catCopy.getBrain()->setIdeas("Busy Cleaning..");

	cat.makeSound(); catCopy.makeSound();

	str*	temp		= cat.getBrain()->getIdeas();
	str*	tempCopy	= catCopy.getBrain()->getIdeas();

	std::cout << "\n\tcat\t|\tcatCopy" << std::endl;
	std::cout << "________________|_____________________" << std::endl;
	std::cout << cat.getBrain() << "\t|\t" << catCopy.getBrain() << std::endl;
	std::cout << "________________|_____________________" << std::endl;

	for (int i = 0; i < 100; i++)
		std::cout << temp[i] << "\t|\t" << tempCopy[i] << std::endl;

	Dog*	dog = new Dog();
	dog->getBrain()->setIdeas("Tasty Bone");

	Dog*	dogCopy(dog);
	dog->getBrain()->setIdeas("Guard mode");

	dog->makeSound(); dogCopy->makeSound();
	
	temp		= dog->getBrain()->getIdeas();
	tempCopy	= dogCopy->getBrain()->getIdeas();

	std::cout << "\n\tdog\t|\tdogCopy" << std::endl;
	std::cout << "________________|_____________________" << std::endl;
	std::cout << dog->getBrain() << "\t|\t" << dogCopy->getBrain() << std::endl;
	std::cout << "________________|_____________________" << std::endl;

	for (int i = 0; i < 100; i++)
		std::cout << temp[i] << "\t|\t" << tempCopy[i] << std::endl;
	delete dog;
}

void	print_header( str arg ) {
	std::cout << "\n=============== ";
	std::cout << arg;
	std::cout << " ===============\n" << std::endl;
}


int main( void ) {

	print_header("Intra's main");
	intra_main();
	print_header("Deep & Shllow Copy");
	deepShallowCopy();
	print_header("LEAKS");
	system("leaks -q animals.exe");
}
