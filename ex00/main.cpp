/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:15:35 by glions            #+#    #+#             */
/*   Updated: 2025/02/03 15:12:09 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main()
{

	std::cout << "TEST FOR LIST" << std::endl;
	std::list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	std::cout << "Values on l : ";
	for (std::list<int>::iterator i = l.begin(); i != l.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	try
	{
		std::cout << "easyfind(l, 3) -> ";
		easyfind(l, 3);
		std::cout << "OK !" << std::endl;
		std::cout << "easyfind(l, 42) ? ";
		easyfind(l, 42);
		std::cout << "OK !" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Element not found" << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "TEST FOR VECTOR" << std::endl;
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	std::cout << "Values on v : ";
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	try
	{
		std::cout << "easyfind(v, 3) -> ";
		easyfind(v, 3);
		std::cout << "OK !" << std::endl;
		std::cout << "easyfind(v, 42) -> ";
		easyfind(v, 42);
		std::cout << "OK !" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Element not found" << std::endl;
	}
	return 0;
}
