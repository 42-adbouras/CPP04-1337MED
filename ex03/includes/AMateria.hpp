/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:56:28 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/04 18:25:23 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
protected:
	
public:
	AMateria	( void );
	AMateria	( std::string const & type );
	AMateria	( const AMateria& right );
	~AMateria	( void );

	std::string const&	getType	( void ) const; //Returns the materia type
	virtual AMateria*	clone	( void ) const = 0;
	virtual void		use		( ICharacter& target );
};
