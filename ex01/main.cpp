/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:02:04 by glions            #+#    #+#             */
/*   Updated: 2025/02/03 18:53:12 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int main(void)
{
	{
		std::cout << "Test with 5 numbers" << std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << "Values on sp : ";
			sp.showValues();
			std::cout << std::endl;
			std::cout << "ShortestSpan -> " << sp.shortestSpan() << std::endl;
			std::cout << "LongestSpan -> " << sp.longestSpan() << std::endl;
		} catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
			return (1);
		}
		std::cout << std::endl;
	}
	{
		std::cout << "Test with 20 random numbers" << std::endl;
		try
		{
			unsigned int size = 20;
			srand(time(NULL));
			Span sp = Span(size);
			for (unsigned int i = 0; i < size; i++)
				sp.addNumber(rand() % (size * 50) - 200);
			std::cout << "Values on sp : ";
			sp.showValues();
			std::cout << std::endl;
			std::cout << "ShortestSpan -> " << sp.shortestSpan() << std::endl;
			std::cout << "LongestSpan -> " << sp.longestSpan() << std::endl;
			std::cout << "TRY TO ADD ONE MORE VALUE : ";
			sp.addNumber(60);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}	
		std::cout << std::endl;
	}
	{
		std::cout << "Test with iterators" << std::endl;
		try
		{
			Span sp = Span(5);
			std::vector<int> v(0);
			v.push_back(6);
			v.push_back(1);
			v.push_back(68);
			v.push_back(7);
			v.push_back(9);
			sp.addNumber(v.begin(), v.end());
			std::cout << "Values on sp : ";
			sp.showValues();
			std::cout << std::endl;
			std::cout << "ShortestSpan -> " << sp.shortestSpan() << std::endl;
			std::cout << "LongestSpan -> " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			return (1);
		}
		
	}
	return (0);
}