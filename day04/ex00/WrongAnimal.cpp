/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:44:24 by absela            #+#    #+#             */
/*   Updated: 2023/01/11 23:47:06 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "WrongAnimal created" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
    std::cout << "WrongAnimal created" << std::endl;
    *this = src;
}

std::string WrongAnimal::getType(void) const {
    return this->type;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal &		WrongAnimal::operator=(WrongAnimal const & rhs) {
    this->type = rhs.type;
    return *this;
}

void WrongAnimal::makeSound() {
    std::cout << "WrongAnimal sound" << std::endl;
}

