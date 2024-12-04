/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:47:04 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/04 11:27:12 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain*	catBrain;
public:
	Cat		( void );
	Cat		( const Cat& right );
	~Cat	( void );

	Cat&	operator=( const Cat& right );

	void	makeSound( void )	const;
	Brain*	getBrain( void )	const;
};
