/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:07:16 by dlu               #+#    #+#             */
/*   Updated: 2023/08/27 03:55:50 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <ctime>
#include <deque>
#include <iostream>
#include <vector>

typedef std::pair<int, int> int_pair;

class PmergeMe {
  public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(PmergeMe const &t);
    PmergeMe &operator=(PmergeMe const &t);

    void printResult(int count, char **args);

    class ParsingException : public std::exception {
      public:
        virtual char const *what() const throw();
    };
    class DuplicateException : public std::exception {
      public:
        virtual char const *what() const throw();
    };
    class IntNegativeException : public std::exception {
      public:
        virtual char const *what() const throw();
    };

  private:
    // Memory block for vector is guaranteed to be continuous
    // while deque is segmented.
    std::vector<int> _vec;
    std::deque<int> _deque;

    unsigned int jacobsthalNum(unsigned int num);

    // In the manual for some reason (time?) to not generic.
    std::deque<int> mergeInsertionSort(std::deque<int> c);
    std::vector<int> mergeInsertionSort(std::vector<int> c);
    void insertion(std::vector<int_pair> &pairs, int size);
    void insertion(std::deque<int_pair> &pairs, int size);
    void merge(std::vector<int_pair> &pairs, std::vector<int> &pend,
               std::vector<int> &sorted);
    void merge(std::deque<int_pair> &pairs, std::deque<int> &pend,
               std::deque<int> &sorted);
};

#endif // PMERGEME_HPP
