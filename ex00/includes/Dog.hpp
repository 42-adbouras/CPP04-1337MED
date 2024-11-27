/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:23:17 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/27 20:56:11 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog		( void );
	Dog		( const Dog& right );
	~Dog	( void );

	Dog&	operator=( const Dog& right );

	void	makeSound( void ) const;
};
