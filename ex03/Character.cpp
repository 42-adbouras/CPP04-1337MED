/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:43:57 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/17 15:17:22 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Character.hpp"

Character::Character( void ) : ICharacter() {
	if (DEBUG)
		std::cout << "[Character Default Constructor Called]" << std::endl;
	name			= "unnamedCharacter";
	inventorySize	= 0;
	unequipedList	= NULL;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character( str _name ) : ICharacter() {
	if (DEBUG)
		std::cout << "[Character Parameterized Constructor Called]" << std::endl;
	name			= _name;
	inventorySize	= 0;
	unequipedList	= NULL;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character( const Character& right ) : ICharacter() {
	if (DEBUG)
		std::cout << "[Character Copy Constructor Called]" << std::endl;
	this->name = right.getName();
	this->inventorySize = right.inventorySize;
	for (int i = 0; i < 4; i++) {
		if (right.inventory[i])
			this->inventory[i] = right.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}

	unequipedList = NULL;

	t_matreiaList*	temp = right.unequipedList;

	while (temp) {
		listAddBack(&this->unequipedList, newNode(temp->node));
		temp = temp->next;
	}
}

Character::~Character( void ) {
	t_matreiaList*	temp;

	if (DEBUG)
		std::cout << "[Character Default Destructor Called]" << std::endl;
	while (this->unequipedList) {
		temp = this->unequipedList;
		this->unequipedList = this->unequipedList->next;
		if (temp->node) {
			delete temp->node;
			temp->node = NULL;
		}
		delete temp;
		temp = NULL;
	}
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i]) {
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
	}
}

Character&	Character::operator=( const Character& right ) {
	if (DEBUG)
		std::cout << "[Character Copy Assignment Called]" << std::endl;
	if (this != &right) {
		this->name			= right.getName();
		this->inventorySize	= right.inventorySize;
		for (int i = 0; i < 4; i++) {
			if (this->inventory[i]) {
				delete this->inventory[i];
				this->inventory[i] = NULL;	
			}
			if (right.inventory[i])
				this->inventory[i] = right.inventory[i]->clone();
		}
	}

	t_matreiaList*	temp = right.unequipedList;

	while (temp) {
		listAddBack(&this->unequipedList, newNode(temp->node));
		temp = temp->next;
	}
	return (*this);
}

std::string const&	Character::getName() const {
	return (this->name);
}

void	Character::equip( AMateria* m ) {
	if (!m)
		return ;
	if (this->inventorySize < 4) {
		for (int i = 0; i < 4; i++) {
			if (!this->inventory[i]) {
				this->inventory[i] = m;
				this->inventorySize++;
				std::cout << this->getName() << " equiped " << m->getType() << " at slot " << i + 1 << "." << std::endl;
				return ;
			}
		}
	} else {
		std::cout << this->getName() << " Inventory is full!" << std::endl;
		delete m;
	}
}

void	Character::unequip( int idx ) {
	if (this->inventorySize > 0 && idx >= 0 && idx < 4) {
		listAddBack(&(this->unequipedList), newNode(this->inventory[idx]));
		std::cout << this->getName() << " droped " << this->inventory[idx]->getType() << " from slot " << idx + 1 << "." << std::endl;
		this->inventory[idx] = NULL;
		this->inventorySize--;
	} else if (idx >= 0 && idx < 4) {
		std::cout << this->getName() << " Inventory, slot " << idx + 1 << "is empty!" << std::endl;
	}
}

void	Character::use( int idx, ICharacter& target ) {
	if (idx >= 0 && idx < 4) {
		if (this->inventory[idx] != NULL)
			this->inventory[idx]->use(target);
		else
			std::cout << this->getName() << " Inventory slot " << idx + 1 << " is empty!" << std::endl;
	} else
		std::cout << this->getName() << " Invalid inventory slot " << idx + 1 << "!" << std::endl;
}
