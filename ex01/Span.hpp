/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:36:05 by glions            #+#    #+#             */
/*   Updated: 2025/02/03 18:38:53 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>

class Span
{
	private:
		unsigned int 		_maxSize;
		unsigned int 		_size;
		std::vector<int> 	_v;
	public:
		Span(void);
		Span(unsigned int);
		Span(Span const &);
		Span &operator=(Span const &);
		~Span();
		void	addNumber(int);
		void	addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		void	showValues(void);

	class NoSpaceException : public std::exception
	{
		public:
			virtual const char  *what() const throw();
	};
	
	class EmptyException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif