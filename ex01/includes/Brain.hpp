/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:11:12 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/03 21:56:42 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

typedef std::string	str;

class Brain
{
private:
	str		ideas[100];
public:
	Brain	( void );
	Brain	( const Brain& right );
	~Brain	( void );

	Brain&	operator=( const Brain& right );

	str*	getIdeas( void );
	void	setIdeas( str* idea );
};
