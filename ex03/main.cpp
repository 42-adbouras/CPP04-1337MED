/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:32:34 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/16 17:11:09 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/Character.hpp"
#include "includes/MateriaSource.hpp"

void	_leaks( void ) { system("leaks -q materia"); }
void	_ft(){

}
int	main( void ) {

    atexit(_leaks);
    {
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

		me->unequip(1);
		me->unequip(0);

		delete bob; delete me; delete src;
		delete ice; delete cure;
	}
}
