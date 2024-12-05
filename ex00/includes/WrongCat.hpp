/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:20:09 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/05 12:22:50 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat		( void );
	WrongCat		( const WrongCat& right );
	~WrongCat		( void );

	WrongCat&		operator=( const WrongCat& right );

	void			makeSound( void ) const;
};
