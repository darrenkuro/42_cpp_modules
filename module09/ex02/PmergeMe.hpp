/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:07:16 by dlu               #+#    #+#             */
/*   Updated: 2023/08/25 03:26:56 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <list>
#include <vector>

class PmergeMe {
  public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(PmergeMe const &t);
    PmergeMe &operator=(PmergeMe const &t);

    void printResult(char **av);

    class ParsingException : public std::exception {
      public:
        virtual char const *what() const throw();
    };

  private:
    std::list<int> _list;
    std::vector<int> _vec;
};

#endif // PMERGEME_HPP
