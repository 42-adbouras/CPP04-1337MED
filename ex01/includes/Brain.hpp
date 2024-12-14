/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:11:12 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/14 17:14:53 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

typedef std::string	str;

class Brain
{
private:
	std::string		ideas[100];
public:
	Brain	( void );
	Brain	( const Brain& right );
	~Brain	( void );

	Brain&	operator=( const Brain& right );

	const std::string*	getIdeas( void ) const;
	void	setIdeas( str idea );
	void	setIdea( str idea, int i );
};
