/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:23:17 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/03 22:02:13 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:
	// Brain*	dogBrain;
public:
	Dog		( void );
	Dog		( const Dog& right );
	~Dog	( void );

	Dog&	operator=( const Dog& right );

	void	makeSound( void ) const;
};
