/* ************************************************************************** */
/*                                                                            */
/*                                                      :::   :::::::::   :::::::::   :::::::::   */
/*   AMateria.                                          :+:         :+:         :+:   :::   :+:   */
/*                                                   +:+         +:+         +:+         +:+    */
/*   By: adbouras <adbouras@student.1337         +#+   +#++#++#+   +#++#++#+         +#+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 00:00:00 by 5:23 by adb       #+#    #+#             */
/*   Updated: 2024/12/05 17:18:57 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria	( void );
	AMateria	( std::string const & type );
	AMateria	( const AMateria& right );
	~AMateria	( void );

	AMateria&	operator=( AMateria& right );

	std::string const&	getType	( void ) const; //Returns the materia type
	virtual AMateria*	clone	( void ) const = 0;
	virtual void		use		( ICharacter& target );
};