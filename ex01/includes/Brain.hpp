/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:07:34 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/01 10:53:25 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Brain
{
private:
	str*	ideas;
public:
	Brain 	( void );
	Brain 	( const Brain& right );
	~Brain 	( void );

	Brain&	operator=( const Brain& right );

	str*	getBrain( void ) const;
};
