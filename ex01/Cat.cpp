/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:16:03 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/27 20:56:08 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"

Cat::Cat( void ) {
	std::cout << "[Cat Default Constructor Called]" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat& right ) {
	std::cout << "[Cat Copy Constructor Called]" << std::endl;
	if (this != &right) {
		*this = right;
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
