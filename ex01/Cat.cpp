/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:16:03 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/01 11:35:22 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"

Cat::Cat( void ) : Animal() {
	std::cout << "[Cat Default Constructor Called]" << std::endl;
	this->type = "Cat";
	this->catBrain = new Brain;
}

Cat::Cat( const Cat& right ) : Animal() {
	std::cout << "[Cat Copy Constructor Called]" << std::endl;
	if (this != &right) {
		this->type = right.getType();
		this->catBrain	= Brain(right.catBrain)
	}
}

Cat::~Cat( void ) {
	std::cout << "[Cat Desstructor Called]" << std::endl;
}

Cat&	Cat::operator=( const Cat& right ) {
	if (this != &right) {
		this->type = right.type;
	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow Meow" << std::endl;
}

Brain*	Brain::getBrain( void ) const {
	return (this->catBrain);
}