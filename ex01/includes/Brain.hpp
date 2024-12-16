/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:11:12 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/16 17:17:45 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define DEBUG	1

typedef std::string	str;

class Brain
{
private:
	str		*ideas;
public:
	Brain	( void );
	Brain	( const Brain& right );
	~Brain	( void );

	Brain&	operator=( const Brain& right );

	str*	getIdeas( void ) const;
	void	setIdeas( str idea );
};
