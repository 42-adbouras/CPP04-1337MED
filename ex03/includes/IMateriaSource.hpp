/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:21:17 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/09 13:02:19 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual 			~IMateriaSource	( void ) { std::cout << "here" << std::endl;}
	virtual void		learnMateria	( AMateria* )					= 0;
	virtual AMateria*	createMateria	( std::string const & type )	= 0;
};
