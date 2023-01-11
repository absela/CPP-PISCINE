/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:46:39 by absela            #+#    #+#             */
/*   Updated: 2023/01/11 23:47:03 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat created" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src)
{
    std::cout << "WrongCat created" << std::endl;
    *this = src;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat &		WrongCat::operator=(WrongCat const & rhs)
{
    this->type = rhs.type;
    return *this;
}

void WrongCat::makeSound(void) 
{
    std::cout << "Meow" << std::endl;
}

