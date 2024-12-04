/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:48:09 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/04 11:50:40 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"

Dog::Dog( void ) : Animal() {
	std::cout << "[Dog Default Constructor Called]" << std::endl;
	this->type		= "Dog";
	this->dogBrain	= new Brain;
}

Dog::Dog( const Dog& right ) : Animal() {
	std::cout << "[Dog Copy Constructor Called]" << std::endl;
	if (this != &right)
		*this = right;
}

Dog::~Dog( void ) {
	std::cout << "[Dog Default Destructor Called]" << std::endl;
	delete this->dogBrain;
}

Dog&	Dog::operator=( const Dog& right ) {
	std::cout << "[Dog Copy Assignment Called]" << std::endl;
	if (this != &right) {
		delete this->dogBrain;
		this->type		= right.type;
		this->dogBrain	= new Brain;
		*this->dogBrain	= *right.dogBrain;
	}
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "Im a DOWG.." << std::endl;
}

Brain*	Dog::getBrain( void ) const {
	return (this->dogBrain);
}
