/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:06:26 by glions            #+#    #+#             */
/*   Updated: 2025/02/03 19:20:25 by glions           ###   ########.fr       */
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
        MutantStack(void) : std::stack<T>() {}
        MutantStack(MutantStack const &copy) : std::stack<T>(copy) {}
        MutantStack &operator=(MutantStack const &copy)
        {
            if (this != &copy)
                std::stack<T>::operator=(copy);
            return (*this);
        } 
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return (this->c.begin()); }
        iterator end() { return (this->c.end()); }
};

#endif