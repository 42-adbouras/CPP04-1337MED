/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:41:35 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/07 16:02:44 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure		( void );
	Cure		( const Cure& right );
	~Cure		( void );

	Cure&		operator=( const Cure& right );

	AMateria*	clone( void ) const;
	void		use( ICharacter& target );
};
