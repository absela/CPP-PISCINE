/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 03:23:41 by absela            #+#    #+#             */
/*   Updated: 2023/01/11 23:46:57 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal{

    public:
        Dog(void);
        Dog(Dog const & src);
        virtual ~Dog(void);

        Dog &		operator=(Dog const & rhs);

        virtual void makeSound() ;
};

#endif