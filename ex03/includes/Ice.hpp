/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:54:29 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/17 14:54:35 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice			( void );
	Ice			( const Ice& right );
	~Ice		( void );

	Ice&		operator=( const Ice& right );

	AMateria*	clone( void ) const;
	void		use( ICharacter& target );
};
