/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 05:07:44 by absela            #+#    #+#             */
/*   Updated: 2023/01/06 23:05:59 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    private :
        int                 value;
        static const int    _fractionalBits = 8;
    public :
        Fixed(); // cunstroctor df
        Fixed(Fixed const &value); // copy cunstroctor
        ~Fixed();
        Fixed& operator=(Fixed const &add);// /*operateur overload*/
        int getRawBits(void) const;
        void setRawBits(int const raw);
};


#endif

