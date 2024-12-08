/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:18:31 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/08 17:45:22 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : IMateriaSource() {
	for (int i = 0; i < 4; i++)
		this->learned[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& right ) : IMateriaSource() {
	*this = right;
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < 4; i++) {
		if (this->learned[i]) {
			delete this->learned[i];
			this->learned[i] = NULL;	
		}
	}
}

MateriaSource&	MateriaSource::operator=( const MateriaSource& right ) {
	if (this != &right) {
		for (int i = 0; i < 4; i++) {
			if (right.learned[i])
				this->learned[i] = right.learned[i]->clone();
		}
	}
}

void	MateriaSource::learnMateria	( AMateria* ) {
	
}

AMateria*	createMateria( std::string const & type ) {
	
}