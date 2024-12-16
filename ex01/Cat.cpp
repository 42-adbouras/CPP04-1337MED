/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:16:03 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/15 16:11:02 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"

Cat::Cat( void ) : Animal() {
	std::cout << "[Cat Default Constructor Called]" << std::endl;
	this->type		= "Cat";
	this->catBrain	= new Brain;
}

Cat::Cat( const Cat& right ) : Animal() {
	std::cout << "[Cat Copy Constructor Called]" << std::endl;
	*this = right;
}

Cat::~Cat( void ) {
	std::cout << "[Cat Default Destructor Called]" << std::endl;
	delete this->catBrain;
}

Cat&	Cat::operator=( const Cat& right ) {
	std::cout << "[Cat Copy Assignment Called]" << std::endl;
	if (this != &right) {
		this->type = right.getType();
		delete this->catBrain;
		this->catBrain	= new Brain(*right.getBrain());
	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow Meow" << std::endl;
}

Brain*	Cat::getBrain( void ) const {
	return (this->catBrain);
}