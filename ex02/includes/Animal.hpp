/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:45:55 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/04 12:26:23 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ********************************************************************************************** */
/*                                                                                                */
/*                                                      :::   :::::::::   :::::::::   :::::::::   */
/*   Animal.hpp                                        :+:         :+:         :+:   :::   :+:    */
/*                                                    +:+         +:+         +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>         +#+   +#++#++#+   +#++#++#+         +#+      */
/*                                                  +#+         +#+         +#+         +#+       */
/*   Created: 2024/11/25 17:45:55 by adbouras      #+#         #+#         #+#         #+#        */
/*   Updated: 2024/11/25 18:32:15 by adbouras     ###   #########   #########         ### .ma     */
/*                                                                                                */
/* ********************************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Brain.hpp"

typedef	std::string	str;

class Animal
{
protected:
	str				type;
public:
	Animal			( void );
	Animal			( const Animal& right );
	virtual			~Animal	( void );

	Animal&			operator=( const Animal& right );

	str				getType( void ) const;
	virtual void	makeSound( void ) const = 0;
};