/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:35:21 by glions            #+#    #+#             */
/*   Updated: 2025/01/23 13:09:18 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _maxSize(1), _size(0)
{}

Span::Span(unsigned int n): _maxSize(n), _size(0)
{
	if (n == 0)
		throw Span::NoSpaceException();
}

Span::Span(Span const &copy)
{
	*this = copy;
}

Span &Span::operator=(Span const &copy)
{
	if (this != &copy)
	{
		this->_maxSize = copy._maxSize;
		this->_size = copy._size;
		this->_v = copy._v;
	}
	return (*this);
}

Span::~Span()
{}

void Span::addNumber(int n)
{
	if (this->_size >= this->_maxSize)
		throw Span::NoSpaceException();
	this->_v.push_back(n);
	this->_size++;
}

unsigned int Span::shortestSpan(void)
{
	int min = -1;
	if (this->_size <= 1)
		throw Span::NoSpaceException();
	std::sort(_v.begin(), _v.end());
	int i = -1;
	while (++i < static_cast<int>(this->_size))
	{
		if (i + 1 < static_cast<int>(this->_size) && (min == -1 || (this->_v[i + 1] - this->_v[i] < min)))
			min = this->_v[i + 1] - this->_v[i];
	}
	return (min);
}

unsigned int Span::longestSpan(void)
{
	int max = -1;
	if (this->_size <= 1)
		throw Span::NoSpaceException();
	std::sort(_v.begin(), _v.end());
	int i = -1;
	while (++i < static_cast<int>(this->_size))
	{
		if (i + 1 < static_cast<int>(this->_size) && (max == -1 || (this->_v[i + 1] - this->_v[0] > max)))
			max = this->_v[i + 1] - this->_v[0];
	}
	return (max);
}

const char *Span::NoSpaceException::what() const throw()
{
	return ("No space left in the Span");
}
