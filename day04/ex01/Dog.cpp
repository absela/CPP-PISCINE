/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:37:33 by absela            #+#    #+#             */
/*   Updated: 2023/01/12 02:03:49 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog created" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog const & src)
{
    std::cout << "Dog created" << std::endl;
    this->type = src.type;
    this->brain = new Brain(*src.brain);
}

Dog::~Dog(void)
{
    std::cout << "Dog destroyed" << std::endl;
}

Dog &		Dog::operator=(Dog const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->type = rhs.type;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*rhs.brain);
    return *this;
}


void Dog::makeSound(void) {
    std::cout << "Woof" << std::endl;
}

