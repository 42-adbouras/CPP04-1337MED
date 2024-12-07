/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:43:57 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/07 15:29:23 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Character.hpp"

Character::Character( void ) : ICharacter(), name("unnamedCharacter"), inventorySize(0) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character( str _name ) : ICharacter(), name(_name), inventorySize(0) {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character( const Character& right ) : ICharacter() {
	*this = right;
}

Character::~Character( void ) {
	for (int i = 0; i < 4; i++) {
		delete this->inventory[i];
		this->inventory[i] = NULL;
	}
}

Character&	Character::operator=( const Character& right ) {
	if (this != &right) {
		this->name = right.getName();
		for (int i = 0; i < 4; i++) {
			if (right.inventory[i])
				this->inventory[i] = right.inventory[i]->clone();
		}
	}
}

std::string const&	Character::getName() const {
	return (this->name);
}

void	Character::equipe( AMateria* m ) {
	if (this->inventorySize < 4) {
		for (int i = 0; i < 4; i++) {
			if (!this->inventory[i])	
				this->inventory[i] = m;
		}
		this->inventorySize++;
	} else {
		std::cout << this->getName() << ": Inventory is full!" << std::endl;
	}
}

void	Character::unequip( int idx ) {
	if (this->inventorySize > 0) {
		this->inventorySize--;
	} else {
		std::cout << this->getName() << ": Inventory is empty!" << std::endl;
	}
}

void	Character::use( int idx, ICharacter& target ) {
	
}
