/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:00:30 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/14 16:55:55 by adbouras         ###   ########.fr       */
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
	Cat	cat;
	Cat	catCopy(cat);

	std::cout << cat.getBrain() << std::endl;
	std::cout << catCopy.getBrain() << std::endl;

	std::cerr << "rere" << std::endl;
	// std::cout << cat1.getBrain() << std::endl;
	// std::cout << cat2.getBrain() << std::endl;
	// cat1.getBrain().setIdeas("!!!!!!!!!!!!!!");
	// std::cout << cat1.getBrain().getIdea(0) << std::endl;
	// cat2.getBrain().setIdeas("??????????????");
	// std::cout << cat1.getBrain().getIdea(0) << std::endl;
}

void	print_header( str arg ) {
	std::cout << "\n=============== ";
	std::cout << arg;
	std::cout << " ===============\n" << std::endl;
}

int	main( void ) {

	// print_header("main");
	// intra_main();

	print_header("deep copy");
	deep_copy();

	print_header("leaks");
	system("leaks -q exe");
}
