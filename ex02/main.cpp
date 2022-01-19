/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgicquel <hgicquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:55:37 by hgicquel          #+#    #+#             */
/*   Updated: 2022/01/19 12:59:57 by hgicquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << "\n";
	std::cout << "b is " << b << "\n";
	std::cout << "c is " << c << "\n";
	std::cout << "d is " << d << "\n";

	std::cout << "a == b " << ((a == b) ? "true" : "false") << "\n";
	std::cout << "b == a " << ((b == a) ? "true" : "false") << "\n";
	std::cout << "a == a " << ((a == a) ? "true" : "false") << "\n";
	std::cout << "b == b " << ((b == b) ? "true" : "false") << "\n";

	std::cout << "a < b " << ((a < b) ? "true" : "false") << "\n";
	std::cout << "b < a " << ((b < a) ? "true" : "false") << "\n";

	std::cout << "a <= b " << ((a <= b) ? "true" : "false") << "\n";
	std::cout << "b <= a " << ((b <= a) ? "true" : "false") << "\n";

	std::cout << "a > b " << ((a > b) ? "true" : "false") << "\n";
	std::cout << "b > a " << ((b > a) ? "true" : "false") << "\n";

	std::cout << "a >= b " << ((a >= b) ? "true" : "false") << "\n";
	std::cout << "b >= a " << ((b >= a) ? "true" : "false") << "\n";

	std::cout << "a + b " << (a + b) << "\n";
	std::cout << "b + a " << (b + a) << "\n";

	std::cout << "a - b " << (a - b) << "\n";
	std::cout << "b - a " << (b - a) << "\n";

	std::cout << "a * b " << (a * b) << "\n";
	std::cout << "b * a " << (b * a) << "\n";

	std::cout << "a / b " << (a / b) << "\n";
	std::cout << "b / a " << (b / a) << "\n";

	return (0);
}