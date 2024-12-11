/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:32:34 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/09 15:18:30 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/Character.hpp"
#include "includes/MateriaSource.hpp"

int main( void ) {

    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    ICharacter* bob = new Character("bob");

    AMateria* ice = src->createMateria("cure");
    AMateria* cure = src->createMateria("cure");

    (void) cure;
    me->equip(ice);
    me->use(0, *bob);
    me->unequip(0);
    me->equip(cure);
    me->use(0, *me);

    while (1)
    ;
    return 0;
}
