/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:52:41 by absela            #+#    #+#             */
/*   Updated: 2023/01/12 01:13:41 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Dog.hpp"
#include"Cat.hpp"

int main()
{
    int size = 10;
    int i = 0;
    Animal *animal[size];
    
    while (i < (size / 2))
    {
        animal[i] = new Dog();
        i++;
    }
    while (i < size)
    {
        animal[i] = new Cat();
        i++;
    }
    i = 0;
    while (i < size)
    {
        std::cout << animal[i]->getType() << " ";
        animal[i]->makeSound();
        i++;
    }
    i = 0;
    while (i < size)
    {
        delete animal[i];
        i++;
    }
    // system ("leaks Brain");
    return 0;
}
