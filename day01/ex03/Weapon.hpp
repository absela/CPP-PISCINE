/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 23:50:50 by absela            #+#    #+#             */
/*   Updated: 2023/01/02 03:30:03 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
        private :
        std::string type;

        public :
        Weapon(std::string str);
        ~Weapon();
        std::string getType() const;
        void setType(std::string str);
};

#endif