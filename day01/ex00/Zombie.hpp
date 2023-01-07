/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:55:18 by absela            #+#    #+#             */
/*   Updated: 2023/01/02 01:56:31 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string _name;
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void);
        void setname(std::string name);
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif