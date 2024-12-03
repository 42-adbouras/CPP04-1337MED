/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:32:32 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/27 21:01:19 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"

Animal::Animal( void ) : type("undefinedAnimal") {
	std::cout << "[Animal Default Constructor Called]" << std::endl;
}

Animal::Animal( const Animal& right ) {
	std::cout << "[Animal Copy Constructor Called]" << std::endl;
	if (this != &right) {
		*this = right;
	}
}

Animal::~Animal( void ) {
	std::cout << "[Animal Destructor Called]" << std::endl;
}

Animal&	Animal::operator=( const Animal& right ) {
	if (this != &right) {
		this->type = right.type;
	}
	return (*this);
}

str		Animal::getType( void ) const {
	return (this->type);
}

void	Animal::makeSound( void ) const {
	std::cout << "🗿 🗿 🗿 🗿 🗿 🗿 🗿" << std::endl;
}