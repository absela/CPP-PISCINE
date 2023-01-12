/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brian.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 00:01:40 by absela            #+#    #+#             */
/*   Updated: 2023/01/12 01:08:24 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = "No_Idea ";
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain created" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = src._ideas[i];
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}

Brain & Brain::operator= (Brain const &rhs)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    return *this;
}

const std::string Brain::getideas(int i)
{
    return this->_ideas[i];
}


