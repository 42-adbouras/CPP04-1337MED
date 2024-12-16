/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:18:33 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/16 15:44:17 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.hpp"

Brain::Brain( void ) {
	std::cout << "[Brain Default Constructor Called]" << std::endl;
	this->ideas = new str[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Empty Idea!";
}

Brain::Brain( const Brain& right ) {
	std::cout << "[Brain Copy Constuctor Called]" << std::endl;
	str*	temp = right.getIdeas();
	this->ideas = new str[100];
	if (this != &right) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = temp[i];
		}
	}
}

Brain::~Brain( void ) {
	std::cout << "[Brain Default Destructor Called]" << std::endl;
	delete []this->ideas;
}

Brain&	Brain::operator=( const Brain& right ) {
	std::cout << "[Brain Copy Assignment Called]" << std::endl;
	if (this != &right) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = right.ideas[i];
		}
	}
	return (*this);
}

str*	Brain::getIdeas( void ) const {
	return (this->ideas);
}

void	Brain::setIdeas( str idea ) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}
