/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:28:01 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/05 12:39:25 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
	std::cout << "[WrongCat Default Constructor Called]" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& right ) : WrongAnimal() {
	std::cout << "[WrongCat Copy Constructor Called]" << std::endl;
	if (this != &right)
		*this = right;
}

WrongCat::~WrongCat( void ) {
	std::cout << "[WrongCat Desstructor Called]" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& right ) {
	std::cout << "[WrongCat Copy Assignment Called]" << std::endl;
	if (this != &right)
		this->type = right.type;
	return (*this);
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Meow Meow" << std::endl;
}
