/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 06:28:27 by absela            #+#    #+#             */
/*   Updated: 2022/12/26 06:44:12 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void announce(void);
        void setZombieName(std::string name);
    private:
        std::string _name;
};
Zombie* zombieHorde( int N, std::string name );
#endif