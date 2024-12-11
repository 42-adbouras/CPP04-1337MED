/* ************************************************************************** */
/*                                                                            */
/*                                                      :::   :::::::::   :::::::::   :::::::::   */
/*   Ice.cpp                                            :+:         :+:         :+:   :::   :+:   */
/*                                                   +:+         +:+         +:+         +:+    */
/*   By: adbouras <adbouras@student.1337         +#+   +#++#++#+   +#++#++#+         +#+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:03:54 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/05 18:03:54 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Ice.hpp"

Ice::Ice( void ) : AMateria() {
	std::cout << "[Ice Default Constructor Called]" << std::endl;
	this->_type = "ice";
}

Ice::Ice( const Ice& right ) : AMateria() {
	std::cout << "[Ice Copy Constructor Called]" << std::endl;
	this->_type = right.getType();
}

Ice::~Ice( void ) {
	std::cout << "[Ice Default Destructor Called]" << std::endl;
}

Ice&	Ice::operator=( const Ice& right ) {
	std::cout << "[Ice Copy Assignment Called]" << std::endl;
	if (this != &right)
		this->_type = right.getType();
	return (*this);
}

AMateria*	Ice::clone() const {
	return (new Ice(*this));
}

void		Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
