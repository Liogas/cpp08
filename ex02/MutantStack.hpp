/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:34:10 by glions            #+#    #+#             */
/*   Updated: 2025/01/27 18:52:34 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack const &copy) : std::stack<T>(copy) {}
        MutantStack &operator=(MutantStack const &copy)
        {
            if (this != &copy)
                std::stack<T>::operator=(copy);
            return (*this);
        }
        virtual ~MutantStack() {}

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return (std::stack<T>::c.begin()); }
        iterator end() { return (std::stack<T>::c.end()); }
};

#endif