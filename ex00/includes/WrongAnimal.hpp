/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:20:32 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/05 13:12:35 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

typedef	std::string	str;

class WrongAnimal
{
protected:
	str				type;
public:
	WrongAnimal		( void );
	WrongAnimal		( const WrongAnimal& right );
	~WrongAnimal	( void );

	WrongAnimal&	operator=( const WrongAnimal& right );

	str				getType( void ) const;
	void			makeSound( void ) const;
};
