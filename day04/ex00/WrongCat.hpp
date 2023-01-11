/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 05:35:46 by absela            #+#    #+#             */
/*   Updated: 2023/01/11 23:46:48 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{

    public:
        WrongCat(void);
        WrongCat(WrongCat const & src);
        ~WrongCat(void);

        WrongCat &		operator=(WrongCat const & rhs);

        void makeSound() ;
};

#endif