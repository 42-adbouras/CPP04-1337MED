/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:41:54 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/07 16:11:46 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cure.hpp"

Cure::Cure( void ) : AMateria() {
	std::cout << "[Cure Default Constructor Called]" << std::endl;
	this->_type = "cure";
}

Cure::Cure( const Cure& right ) : AMateria() {
	std::cout << "[Ice Copy Constructor Called]" << std::endl;
	this->_type = right.getType();
}

Cure::~Cure( void ) {
	std::cout << "[Cure Default Destructor Called]" << std::endl;
}

Cure&	Cure::operator=( const Cure& right ) {
	if (this != &right)
		this->_type = right.getType();
	return (*this);
}

AMateria*	Cure::clone( void ) const {
	return (new Cure(*this));
}

void		Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}