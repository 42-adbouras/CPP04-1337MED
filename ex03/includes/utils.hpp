/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:12:08 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/11 16:43:29 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

typedef struct	s_materiaList
{
	AMateria*		node;
	s_materiaList*	next;
}				t_matreiaList;

t_matreiaList*	newNode( AMateria* m );
void			listAddBack( t_matreiaList** list, t_matreiaList* _new );
