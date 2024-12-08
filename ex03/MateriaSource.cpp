/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:18:31 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/08 12:36:45 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : IMateriaSource() {
	for (int i = 0; i < 4; i++)
		this->leared[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& right ) : IMateriaSource() {
	*this = right;
}

MateriaSource::~MateriaSource( void ) {
	for (int i = 0; i < 4; i++) {
		if (this->leared[i]) {
			delete this->leared[i];
			this->leared[i] = NULL;	
		}
	}
}