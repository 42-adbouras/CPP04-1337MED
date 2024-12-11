/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:43:57 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/11 17:12:16 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Character.hpp"

Character::Character( void ) : ICharacter() {
	std::cout << "[Character Default Constructor Called]" << std::endl;
	name			= "unnamedCharacter";
	inventorySize	= 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character( str _name ) : ICharacter() {
	std::cout << "[Character Parameterized Constructor Called]" << std::endl;
	name			= _name;
	inventorySize	= 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character( const Character& right ) : ICharacter() {
	std::cout << "[Character Copy Constructor Called]" << std::endl;
	*this = right;
}

Character::~Character( void ) {
	t_matreiaList*	temp;

	std::cout << "[Character Default Destructor Called]" << std::endl;
	while (this->unequipedList) {
        temp = this->unequipedList;
        this->unequipedList = this->unequipedList->next;
        delete temp->node;
        delete temp;
    }
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
		this->inventory[i] = NULL;
	}
}

Character&	Character::operator=( const Character& right ) {
	std::cout << "[Character Copy Assignment Called]" << std::endl;
	if (this != &right) {
		this->name = right.getName();
		for (int i = 0; i < 4; i++) {
			if (this->inventory[i]) {
				delete this->inventory[i];
				this->inventory[i] = NULL;	
			}
			if (right.inventory[i])
				this->inventory[i] = right.inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const&	Character::getName() const {
	return (this->name);
}

void	Character::equip( AMateria* m ) {
	if (this->inventorySize < 4) {
		for (int i = 0; i < 4; i++) {
			if (!this->inventory[i]) {
				this->inventory[i] = m;
				this->inventorySize++;
				return ;
			}
		}
	} else {
		std::cout << this->getName() << ": Inventory is full!" << std::endl;
	}
}

void	Character::unequip( int idx ) {
	if (this->inventorySize > 0) {
		listAddBack(&(this->unequipedList), newNode(this->inventory[idx]));
		this->inventory[idx] = NULL;
		this->inventorySize--;
	} else {
		std::cout << this->getName() << ": Inventory is empty!" << std::endl;
	}
}

void	Character::use( int idx, ICharacter& target ) {
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
}
