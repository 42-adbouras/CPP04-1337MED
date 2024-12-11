/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:24:07 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/09 12:03:23 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

typedef std::string str;

class AMateria;

class Character : public ICharacter
{
private:
	str			name;
	AMateria	*inventory[4];
	int			inventorySize;
public:
	Character	( void );
	Character	( str _name );
	Character	( const Character& right );
	~Character	( void );

	Character&	operator=( const Character& right );

	std::string const&	getName() const;
	void	equip( AMateria* m );
	void	unequip( int idx );
	void	use( int idx, ICharacter& target );
};
