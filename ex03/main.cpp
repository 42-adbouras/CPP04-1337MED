/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:32:34 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/17 15:22:03 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/Character.hpp"
#include "includes/MateriaSource.hpp"

void	intra_main( void ) {
	IMateriaSource*	src		= new MateriaSource();

	AMateria*		ice 	= new Ice();
	AMateria*		cure	= new Cure();

	src->learnMateria(ice);
	src->learnMateria(cure);

	ICharacter*		me		= new Character("me");
	AMateria*		tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter*		bob		= new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob; delete me; delete src;
	delete ice; delete cure;
}

void	foo( void ) {
	Character		john("John");
	Character		steve(john);
	Ice 			ice;
	Cure 			cure;

	steve.setName("Steve");

	MateriaSource	src;
	src.learnMateria(&ice);
	src.learnMateria(&cure);
	
	for (int i = 0; i < 6; i++)
		john.equip(src.createMateria("ice"));
	john.unequip(1); john.unequip(2);
	for (int i = 0; i < 4; i++)
		john.equip(src.createMateria("cure"));
	
	steve.equip(src.createMateria("fire"));
	steve.use(0, john);

	for (int i = 0; i < 6; i++)
		john.use(i, steve);

	std::cout << "____________ unequip ____________\n" << std::endl;
	for (int i = 0; i < 6; i++)
		john.unequip(i);
}

void	print_header( str arg ) {
	std::cout << "\n=============== ";
	std::cout << arg;
	std::cout << " ===============\n" << std::endl;
}

int	main( void ) {

	print_header("Intra's main");
	intra_main();
	print_header("Test Case");
	foo();
	print_header("LEAKS");
	std::cout << std::endl; system("leaks -q materia");
}
