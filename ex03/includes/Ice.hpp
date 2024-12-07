/* ************************************************************************** */
/*                                                                            */
/*                                                      :::   :::::::::   :::::::::   :::::::::   */
/*   Ice.hpp                                            :+:         :+:         :+:   :::   :+:   */
/*                                                   +:+         +:+         +:+         +:+    */
/*   By: adbouras <adbouras@student.1337         +#+   +#++#++#+   +#++#++#+         +#+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 17:55:16 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/05 17:55:16 by adbouras         ###   ########.fr       */
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
