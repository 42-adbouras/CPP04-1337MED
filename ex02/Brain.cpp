/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:18:33 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/04 11:29:53 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.hpp"

Brain::Brain( void ) {
	std::cout << "[Brain Default Constructor Called]" << std::endl;
}

Brain::Brain( const Brain& right ) {
	std::cout << "[Brain Copy Constuctor Called]" << std::endl;
	if (this != &right)
		*this = right;
}

Brain::~Brain( void ) {
	std::cout << "[Brain Default Destructor Called]" << std::endl;
}

Brain&	Brain::operator=( const Brain& right ) {
	std::cout << "[Brain Copy Assignment Called]" << std::endl;
	if (this != &right)
		*this->ideas = *right.ideas;
	return (*this);
}

str		Brain::getIdea( int i ) const {
	return (this->ideas[i]);
}

void	Brain::setIdea( str idea, int i ) {
		this->ideas[i] = idea;
}

void	Brain::setIdeas( str idea ) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}
