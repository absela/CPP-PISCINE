/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 06:15:02 by absela            #+#    #+#             */
/*   Updated: 2023/01/06 12:44:20 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int const	Fixed::fractionalBits = 8;

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->fixed = 0;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed&		Fixed::operator=(Fixed const &rhs) {
    std::cout << "Assignation operator called" << std::endl;
    this->fixed = rhs.getRawBits();
    return *this;
}

Fixed::Fixed(int const n) {
    std::cout << "Int constructor called" << std::endl;
    this->fixed = n << this->fractionalBits;
}

Fixed::Fixed(float const n) {
    std::cout << "Float constructor called" << std::endl;
    this->fixed = roundf(n * (1 << this->fractionalBits));
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor called" << std::endl;
    this->fixed = src.getRawBits();
}

int			Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed;
}

void		Fixed::setRawBits(int const raw) {
    this->fixed = raw;
}

float		Fixed::toFloat(void) const {
    return (float)this->fixed / (1 << this->fractionalBits);
}

int			Fixed::toInt(void) const {
    return this->fixed >> this->fractionalBits;
}
