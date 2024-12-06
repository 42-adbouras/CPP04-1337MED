/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:32:34 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/07 21:32:36 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/Character.hpp"

int main( void ) {
    ICharacter  *me = new Character("Me");
    ICharacter  *foe = new Character("Foe");
    AMateria i("ice");
    AMateria c("cure");

    delete me;
    delete foe;
}