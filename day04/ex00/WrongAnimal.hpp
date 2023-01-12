/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 05:35:41 by absela            #+#    #+#             */
/*   Updated: 2023/01/12 04:41:57 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const & src);
        ~WrongAnimal(void);

        WrongAnimal &		operator=(WrongAnimal const & rhs);
        std::string getType() const;

        void makeSound() ;

    protected:

    std::string type;

};

#endif