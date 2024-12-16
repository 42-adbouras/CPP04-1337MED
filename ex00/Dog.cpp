/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:48:09 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/16 17:13:20 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"

Dog::Dog( void ) : Animal() {
	if (DEBUG)
		std::cout << "[Dog Default Constructor Called]" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog& right ) : Animal() {
	if (DEBUG)
		std::cout << "[Dog Copy Constructor Called]" << std::endl;
	*this = right;
}

Dog::~Dog( void ) {
	if (DEBUG)
		std::cout << "[Dog Default Destructor Called]" << std::endl;
}

Dog&	Dog::operator=( const Dog& right ) {
	if (DEBUG)
		std::cout << "[Dog Copy Assignment Called]" << std::endl;
	if (this != &right)
		this->type = right.type;
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "Im a DOWG.." << std::endl;
}
