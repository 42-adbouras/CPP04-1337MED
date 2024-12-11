/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:12:19 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/11 16:42:34 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/utils.hpp"

t_matreiaList*	newNode( AMateria* m ) {
	t_matreiaList* newNode;

	if (!m)
		return (NULL);
	newNode			= new t_matreiaList;
	newNode->node	= m;
	newNode->next	= NULL;
	return (newNode);
}

void	listAddBack( t_matreiaList** list, t_matreiaList* _new ) {
	t_matreiaList	*last;

	if (!*list && !_new)
		return ;
	if (!*list) {
		*list = _new;
		return ;
	}
	last = *list;
	while (last->next)
		last = last->next;
	last->next = _new;
}
