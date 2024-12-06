/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:43:57 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/06 17:04:35 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Character.hpp"

Character::Character( void ) : ICharacter() {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::Character( const Character& right ) : ICharacter() {
	// for (int i = 0; i < 4; i++) {
	// 	if (right.inventory[i])
	// 		this->inventory[i] = right.inventory[i]->clone();
	// }
	*this = right;
}

Character::~Character( void ) {
	for (int i = 0; i < 4; i++) {
		delete this->inventory[i];
		this->inventory[i] = nullptr;
	}
}
