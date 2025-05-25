/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:22:02 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/25 19:52:51 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
	std::cout << "Destructor called" <<std::endl;
}

Fixed::Fixed()  : store(0)
{
	std::cout << "Default constructor called" <<std::endl;
}


Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->store = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignament operator called" << std::endl;
	if (this != &other)
		this->store = other.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" <<std::endl;
	return this->store;
}
void Fixed::setRawBits( int const raw )
{
	this->store = raw;
}

