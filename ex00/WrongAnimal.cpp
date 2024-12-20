/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:24:29 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/16 17:13:35 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("undefinedWrongAnimal") {
	if (DEBUG)
		std::cout << "[WrongAnimal Default Constructor Called]" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& right ) {
	if (DEBUG)
		std::cout << "[WrongAnimal Copy Constructor Called]" << std::endl;
	*this = right;
}

WrongAnimal::~WrongAnimal( void ) {
	if (DEBUG)
		std::cout << "[WrongAnimal Default Destructor Called]" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& right ) {
	if (DEBUG)
		std::cout << "[WrongAnimal Copy Assignment Called]" << std::endl;
	if (this != &right)
		this->type = right.type;
	return (*this);
}

str		WrongAnimal::getType( void ) const {
	return (this->type);
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "🗿 🗿 🗿 🗿 🗿 🗿 🗿" << std::endl;
}
