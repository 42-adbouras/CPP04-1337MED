/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:24:07 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/06 16:43:15 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
private:
	AMateria	*inventory[4];
public:
	Character	( void );
	Character	( const Character& right );
	~Character	( void );

	Character&	operator=( const Character& right );

	std::string const&	getName() const;
	void	equipe( AMateria* m );
	void	unequip( int idx );
	void	use( int idx, ICharacter& target );
};
