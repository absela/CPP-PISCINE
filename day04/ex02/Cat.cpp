/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:35:21 by absela            #+#    #+#             */
/*   Updated: 2023/01/17 19:03:12 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Cat created" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat const &src)
{
    std::cout << "Cat created" << std::endl;
    this->type = src.type;
    this->brain = new Brain(*src.brain);
}

Cat::~Cat(void) {
    std::cout << "Cat destroyed" << std::endl;
    delete brain;
}

Cat &		Cat::operator=(Cat const & rhs) {
    if (&rhs == this)
        return *this;
    this->type = rhs.type;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*rhs.brain); 
    return *this;
}

void Cat::makeSound(void)  {
    std::cout << "Meow" << std::endl;
}

