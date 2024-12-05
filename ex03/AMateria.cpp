/* ************************************************************************** */
/*                                                                            */
/*                                                      :::   :::::::::   :::::::::   :::::::::   */
/*   AMateria.                                          :+:         :+:         :+:   :::   :+:   */
/*                                                   +:+         +:+         +:+         +:+    */
/*   By: adbouras <adbouras@student.1337         +#+   +#++#++#+   +#++#++#+         +#+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:17:43 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/05 17:17:43 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "includes/AMateria.hpp"

AMateria::AMateria( void ) : _type("undefinedMateria") {
	std::cout << "[AMateria Default Constructor Called]" << std::endl;
}

AMateria::AMateria( std::string const & type ) : _type(type) {
	std::cout << "[AMateria Parameterized Constructor Called]" << std::endl;
};

AMateria::AMateria( const AMateria& right ) {
	std::cout << "[AMateria Copy Constructor Called]" << std::endl;
	this->_type = right.getType();
}

AMateria::~AMateria	( void ) {
	std::cout << "[AMateria Default Destructor Called]" << std::endl;
}

AMateria&	AMateria::operator=( AMateria& right ) {
	std::cout << "[AMateria Copy Assignment Called]" << std::endl;
	if (this != &right)
		this->_type = right.getType();
	return (*this);
}

std::string const&	AMateria::getType	( void ) const {
	return (this->_type);
}

void	AMateria::use( ICharacter& target ) {
	std::cout << "IDK how to use " << this->getType() << std::endl;
}
