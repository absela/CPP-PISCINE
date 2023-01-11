/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:37:33 by absela            #+#    #+#             */
/*   Updated: 2023/01/11 23:47:09 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog created" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const & src)
{
    std::cout << "Dog created" << std::endl;
    *this = src;
}

Dog::~Dog(void)
{
    std::cout << "Dog destroyed" << std::endl;
}

Dog &		Dog::operator=(Dog const & rhs)
{
    this->type = rhs.type;
    return *this;
}


void Dog::makeSound(void) {
    std::cout << "Woof" << std::endl;
}

