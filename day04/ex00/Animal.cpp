/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 05:39:32 by absela            #+#    #+#             */
/*   Updated: 2023/01/11 05:45:21 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Animal created" << std::endl;
}

Animal::Animal(Animal const & src) {
    std::cout << "Animal created" << std::endl;
    *this = src;
}

Animal::~Animal(void) {
    std::cout << "Animal destroyed" << std::endl;
}

Animal &		Animal::operator=(Animal const & rhs) {
    if (this != &rhs) {
        this->type = rhs.type;
    }
    return *this;
}

std::string Animal::getType() {
    return this->type;
}

void Animal::makesound() {
    std::cout << "Animal sound" << std::endl;
}
