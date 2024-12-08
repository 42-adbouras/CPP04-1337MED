/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:28:44 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/08 17:45:02 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria		*learned[4];
public:
	MateriaSource	( void );
	MateriaSource	( const MateriaSource& right );
	~MateriaSource	( void );

	MateriaSource&	operator=		( const MateriaSource& right );
	void			learnMateria	( AMateria* );
	AMateria*		createMateria	( std::string const & type );
};
