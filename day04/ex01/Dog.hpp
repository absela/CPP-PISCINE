/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 03:23:41 by absela            #+#    #+#             */
/*   Updated: 2023/01/12 02:00:44 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal{

    public:
        Dog(void);
        Dog(Dog const & src);
        virtual ~Dog(void);
        
        Dog &		operator=(Dog const & rhs);

        virtual void makeSound() ;
    private :
        Brain* brain;
};

#endif