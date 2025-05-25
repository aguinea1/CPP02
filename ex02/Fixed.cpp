/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:22:02 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/25 19:42:30 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
Fixed::~Fixed()
{
	//std::cout << "Destructor called" <<std::endl;
}

Fixed::Fixed()  : store(0)
{
	//std::cout << "Default constructor called" <<std::endl;
}

Fixed::Fixed(const int num)
{
	//std::cout << "Int constructor called" << std::endl;
	this->store = num << frac_bits;
}
Fixed::Fixed(const float pi)
{
	//std::cout << "Float constructor called" << std::endl;
	store =  roundf(pi *(1 << frac_bits));
}

Fixed::Fixed(const Fixed& other)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->store = other.getRawBits();
}
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++store;
	return(temp);
}
Fixed& Fixed::operator++()
{
	++store;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--store;
	return temp;
}

Fixed& Fixed::operator--()
{
	--store;
	return *this;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	//std::cout << "Copy assignament operator called" << std::endl;
	if (this != &other)
		this->store = other.getRawBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed& other)const 
{
    return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed::operator-(const Fixed& other) const
{
  return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return this->toFloat() * other.toFloat();
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return this->toFloat() / other.toFloat();
}

bool Fixed::operator>(const Fixed& other) const 
{
    return this->store > other.store;
}

bool Fixed::operator<(const Fixed& other) const
{
    return this->store < other.store;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return this->store >= other.store;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return this->store <= other.store;
}

bool Fixed::operator==(const Fixed& other)  const
{
    return this->store == other.store;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return this->store != other.store;
}

Fixed& Fixed::min(Fixed& n, Fixed& n1)
{
	if (n > n1)
		return n1;
	return n;
}

Fixed& Fixed::max(Fixed& n, Fixed& n1)
{
	if (n > n1)
		return n;
	return n1;
}

const Fixed& Fixed::min(const Fixed& n, const Fixed& n1)
{
	if (n > n1)
		return n1;
	return n;
}

const Fixed& Fixed::max(const Fixed& n, const Fixed& n1)
{
	if (n > n1)
		return n;
	return n1;
}

int Fixed::getRawBits( void ) const
{
	return this->store;
}

void Fixed::setRawBits( int const raw )
{
	this->store = raw;
}

float Fixed::toFloat( void ) const
{
	return (float)this->store / (1 << frac_bits);
}
int Fixed::toInt(void ) const
{
	return store >> frac_bits;
}
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) 
{
	out << fixed.toFloat();
	return out;
}

