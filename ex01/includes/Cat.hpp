/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:47:04 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/01 11:33:56 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain*	catBrain;
public:
	Cat		( void );
	Cat		( const Cat& right );
	~Cat	( void );

	Cat&	operator=( const Cat& right );

	void	makeSound( void ) const;
	Brain*	getBrain( void ) const;
};
