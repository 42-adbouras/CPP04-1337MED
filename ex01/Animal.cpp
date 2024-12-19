/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:32:32 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/19 16:02:45 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"

Animal::Animal( void ) : type("undefinedAnimal") {
	if (DEBUG)
		std::cout << "[Animal Default Constructor Called]" << std::endl;
}

Animal::Animal( const Animal& right ) {
	if (DEBUG)
		std::cout << "[Animal Copy Constructor Called]" << std::endl;
	*this = right;
}

Animal::~Animal( void ) {
	if (DEBUG)
		std::cout << "[Animal Default Destructor Called]" << std::endl;
}

Animal&	Animal::operator=( const Animal& right ) {
	if (DEBUG)
		std::cout << "[Animal Copy Assignment Called]" << std::endl;
	if (this != &right)
		this->type = right.type;
	return (*this);
}

str		Animal::getType( void ) const {
	return (this->type);
}

void	Animal::makeSound( void ) const {
	std::cout << "🗿 🗿 🗿 🗿 🗿 🗿 🗿" << std::endl;
}
