/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:50:57 by absela            #+#    #+#             */
/*   Updated: 2022/12/31 04:09:45 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private :
    std::string name;
    Weapon& lol;

    public :
    HumanA(std::string str, Weapon& lol);
    ~HumanA();
    void attack() const ;

};

#endif