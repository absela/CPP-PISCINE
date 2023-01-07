/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 09:53:42 by absela            #+#    #+#             */
/*   Updated: 2023/01/06 12:50:49 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
    this->fixed = 0;
}

Fixed::Fixed(Fixed const & src){
    this->fixed = src.getRawBits();
}

Fixed::~Fixed(void) {
}

Fixed::Fixed(int const n) {
    this->fixed = (n << this->fractionalBits);
}

Fixed::Fixed(float const n) {
    this->fixed = (float)roundf(n * (1 << this->fractionalBits));
}

float Fixed::toFloat(void) const
{
    return ((float)this->fixed / (1 << this->fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->fixed >> this->fractionalBits);
}

int Fixed::getRawBits(void) const {
    return this->fixed;
}

void Fixed::setRawBits(int const raw) {
    this->fixed = raw;
}

std::ostream &	operator<<(std::ostream &output, Fixed const &p)
{
    output << p.toFloat();
    return output;
}

bool Fixed::operator <(Fixed const &comp) const
{
    return (this->fixed < comp.getRawBits());
}

bool Fixed::operator >(Fixed const &comp) const
{
    return (this->fixed > comp.getRawBits());
}

bool Fixed::operator <=(Fixed const &comp) const
{
    return (this->fixed <= comp.getRawBits());
}

bool Fixed::operator >=(Fixed const &comp) const
{
    return (this->fixed >= comp.getRawBits());
}

bool Fixed::operator == (Fixed const &comp) const
{
    return (this->fixed == comp.getRawBits());
}

bool Fixed::operator != (Fixed const &comp) const
{
    return (this->fixed != comp.getRawBits());
}

Fixed Fixed::operator +(Fixed const &op) const 
{
    Fixed tmp(this->toFloat() + op.toFloat());
    return tmp;
}

Fixed Fixed::operator -(Fixed const &op) const 
{
    Fixed tmp(this->toFloat() - op.toFloat());
    return tmp;
}

Fixed Fixed::operator /(Fixed const &op) const
{
    Fixed tmp(this->toFloat() / op.toFloat());
    return tmp;
}

Fixed Fixed::operator *(Fixed const &op) const
{
    Fixed tmp(this->toFloat() * op.toFloat());
    return tmp;
}

Fixed Fixed::operator ++(void)
{
    this->fixed++;
    return *this;
}

Fixed Fixed::operator ++(int)
{
    Fixed tmp(*this);
    this->fixed++;
    return tmp;
}

Fixed Fixed::operator --(void)
{
    this->fixed--;
    return *this;
}

Fixed Fixed::operator --(int)
{
    Fixed tmp(*this);
    this->fixed--;
    return tmp;
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

Fixed const & Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b)
{
    if ( a > b)
     return a;
    return b;
}
