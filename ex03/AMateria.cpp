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

#include "includes/AMateria.hpp"
#include "includes/ICharacter.hpp"

AMateria::AMateria( void ) : _type("undefinedMateria") {
	if (DEBUG)
		std::cout << "[AMateria Default Constructor Called]" << std::endl;
}

AMateria::AMateria( std::string const & type ) : _type(type) {
	if (DEBUG)
		std::cout << "[AMateria Parameterized Constructor Called]" << std::endl;
};

AMateria::AMateria( const AMateria& right ) {
	if (DEBUG)
		std::cout << "[AMateria Copy Constructor Called]" << std::endl;
	this->_type = right.getType();
}

AMateria::~AMateria	( void ) {
	if (DEBUG)
		std::cout << "[AMateria Default Destructor Called]" << std::endl;
}

AMateria&	AMateria::operator=( AMateria& right ) {
	if (DEBUG)
		std::cout << "[AMateria Copy Assignment Called]" << std::endl;
	if (this != &right)
		this->_type = right.getType();
	return (*this);
}

std::string const&	AMateria::getType	( void ) const {
	return (this->_type);
}

void	AMateria::use( ICharacter& target ) {
	std::cout << target.getName() << ": IDK how to use " << this->getType() << std::endl;
}
