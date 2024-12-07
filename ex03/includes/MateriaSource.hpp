/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:28:44 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/07 21:30:59 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual 			~IMateriaSource() {}
	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const & type) = 0;
};