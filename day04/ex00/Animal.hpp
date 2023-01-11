/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 03:17:46 by absela            #+#    #+#             */
/*   Updated: 2023/01/11 05:45:39 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

    public:
        Animal(void);
        Animal(Animal const & src);
        ~Animal(void);

        Animal &		operator=(Animal const & rhs);
        std::string getType();

        virtual void makesound();

    protected:

    std::string type;

};

#endif


