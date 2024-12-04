/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:05:15 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/04 18:25:39 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const& getName() const		= 0;
	virtual void equipe( AMateria* m )				= 0;
	virtual void unequip( int idx ) 				= 0;
	virtual void use( int idx, ICharacter& target )	= 0;
};
