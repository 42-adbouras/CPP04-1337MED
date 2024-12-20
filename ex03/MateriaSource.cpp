/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:18:31 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/17 15:07:48 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : IMateriaSource() {
	if (DEBUG)
		std::cout << "[MateriaSource Default Constructor Called]" << std::endl;
	for (int i = 0; i < 4; i++)
		this->learned[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& right ) : IMateriaSource() {
	if (DEBUG)
		std::cout << "[MateriaSource Copy Constructor Called]" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->learned[i] = right.learned[i]->clone();
	}
}

MateriaSource::~MateriaSource( void ) {
	if (DEBUG)
		std::cout << "[MateriaSource Default Destructor Called]" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->learned[i]) {
			delete this->learned[i];
			this->learned[i] = NULL;
		}
	}
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& right ) {
	if (DEBUG)
		std::cout << "[MateriaSource Copy Assignment Called]" << std::endl;
	if (this != &right) {
		for (int i = 0; i < 4; i++) {
			if (this->learned[i]) {
				delete this->learned[i];
				this->learned[i] = NULL;
			}
			if (right.learned[i])
				this->learned[i] = right.learned[i]->clone();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria	( AMateria* m ) {
	if (!m)
		return ;
	for (int i = 0; i < 4; i++) {
		if (!this->learned[i]) {
			this->learned[i] = m->clone();
			return ;
		}
	}
	std::cout << "* MateriaSource is full! *" << std::endl;
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {
	for (int i = 0; i < 4; i++) {
		if (this->learned[i] && this->learned[i]->getType() == type)
			return (this->learned[i]->clone());
	}
	std::cout << "* !Unknown Materia: " << type << "¡ *" << std::endl;
	return (NULL);
}
