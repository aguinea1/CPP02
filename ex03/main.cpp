/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:03:05 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/25 20:40:06 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
int main( void )
{
	Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point inside(3, 3);
    Point edge(0, 0);
    Point outside(10, 10);

    std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl;
    std::cout << "Edge: " << bsp(a, b, c, edge) << std::endl;
	std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl;
}
