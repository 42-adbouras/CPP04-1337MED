/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:18:29 by adbouras          #+#    #+#             */
/*   Updated: 2024/11/30 18:33:42 by adbouras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.hpp"

Brain::Brain( void ) {
	std::cout << "[Brain Default Constructor Called]" << std::endl;
}

Brain::Brain( const Brain& right ) {
	std::cout << "[Brain Copy Constructor Called]" << std::endl;
	*this = right;
}

Brain::~Brain( void ) {
	std::cout << "[Brain Default Destructor Called]" << std::endl;	
}

Brain&	Brain::operator=( const Brain& right ) {
	if (this != &right) {
		this->ideas = right.ideas;
	}
}