/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:48:09 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/01 11:22:12 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"

Dog::Dog( void ) : Animal() {
	std::cout << "[Dog Default Constructor Called]" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog& right ) : Animal() {
	std::cout << "[Dog Copy Constructor Called]" << std::endl;
	if (this != &right) {
		*this = right;
	}
}

Dog::~Dog( void ) {
	std::cout << "[Dog Desstructor Called]" << std::endl;
}

Dog&	Dog::operator=( const Dog& right ) {
	if (this != &right) {
		this->type = right.type;
	}
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "Im a DOWG.." << std::endl;
}
