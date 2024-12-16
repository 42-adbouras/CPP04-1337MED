/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:16:03 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/16 17:13:01 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"

Cat::Cat( void ) : Animal() {
	if (DEBUG)
		std::cout << "[Cat Default Constructor Called]" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat& right ) : Animal() {
	if (DEBUG)
		std::cout << "[Cat Copy Constructor Called]" << std::endl;
	*this = right;
}

Cat::~Cat( void ) {
	if (DEBUG)
		std::cout << "[Cat Default Destructor Called]" << std::endl;
}

Cat&	Cat::operator=( const Cat& right ) {
	if (DEBUG)
		std::cout << "[Cat Copy Assignment Called]" << std::endl;
	if (this != &right)
		this->type = right.type;
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Meow Meow" << std::endl;
}
