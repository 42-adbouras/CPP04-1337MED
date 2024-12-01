/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:18:29 by adbouras          #+#    #+#             */
/*   Updated: 2024/12/01 11:24:28 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.hpp"

Brain::Brain( void ) {
	std::cout << "[Brain Default Constructor Called]" << std::endl;
	this->ideas = new str[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "brainIdeas";
}

Brain::Brain( const Brain& right ) {
	str*	temp = right.getBrain();

	std::cout << "[Brain Copy Constructor Called]" << std::endl;
	
	this->ideas = new str[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = temp[i];
}

Brain::~Brain( void ) {
	std::cout << "[Brain Default Destructor Called]" << std::endl;
	delete []this->ideas;
}

Brain&	Brain::operator=( const Brain& right ) {
	if (this != &right) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = right.ideas[i];
	}
}

str*	Brain::getBrain( void ) const {
	return (this->ideas);
}
