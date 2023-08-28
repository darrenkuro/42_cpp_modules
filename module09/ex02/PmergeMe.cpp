/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:07:14 by dlu               #+#    #+#             */
/*   Updated: 2023/08/28 11:54:10 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}
PmergeMe::PmergeMe(PmergeMe const &t) { *this = t; }
PmergeMe &PmergeMe::operator=(PmergeMe const &t) {
    if (this == &t)
        return *this;
    //
    return *this;
}

int PmergeMe::stringToInt(std::string const &str) {
    std::istringstream iss(str);
    int value;
    char remain;
    if (iss >> value && !(iss >> remain))
        return value;
    else
        throw std::exception();
}

void PmergeMe::printResult(int count, char **args) {
    // Push elements into containers
    for (int i = 0; i < count; i++) {
        int num;
        try {
            num = stringToInt(args[i]);
        } catch (std::exception &e) {
            throw ParsingException();
        }
        if (num < 0)
            throw IntNegativeException();
        if (std::find(_vec.begin(), _vec.end(), num) != _vec.end())
            throw DuplicateException();
        _vec.push_back(num);
        _deque.push_back(num);
    }

    std::cout << "Before:  ";
    for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    // Sorting vector
    clock_t vecStartTime = clock();
    std::vector<int> vecSorted = mergeInsertionSort(_vec);
    clock_t vecEndTime = clock();

    // Sorting list
    clock_t dequeStartTime = clock();
    std::deque<int> dequeSorted = mergeInsertionSort(_deque);
    clock_t dequeEndTime = clock();

    std::cout << "After:   ";
    for (std::vector<int>::iterator it = vecSorted.begin();
         it != vecSorted.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Time to process a range of " << _vec.size()
              << " elements with std::vector : "
              << static_cast<double>(vecEndTime - vecStartTime) /
                     CLOCKS_PER_SEC * 1000000
              << " us" << std::endl;
    std::cout << "Time to process a range of " << _deque.size()
              << " elements with std::deque : "
              << static_cast<double>(dequeEndTime - dequeStartTime) /
                     CLOCKS_PER_SEC * 1000000
              << " us" << std::endl;
}

unsigned int PmergeMe::jacobsthalNum(unsigned int num) {
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return jacobsthalNum(num - 1) + 2 * jacobsthalNum(num - 2);
}

/**
 * Reference: https://en.wikipedia.org/wiki/Merge-insertion_sort
 */
std::vector<int> PmergeMe::mergeInsertionSort(std::vector<int> c) {
    if (c.size() < 2)
        return c;

    // Check whether the container has even or odd number of elements
    int straggler;
    bool odd = c.size() % 2 != 0;
    if (odd) {
        straggler = c.back();
        c.pop_back();
    }

    // Create pairs
    std::vector<int_pair> pairs;
    for (std::vector<int>::iterator it = c.begin(); it != c.end(); it += 2) {
        int_pair pair;
        int num1 = *it;
        int num2 = *(it + 1);
        pair.first = num1 > num2 ? num2 : num1;
        pair.second = num1 > num2 ? num1 : num2;
        pairs.push_back(pair);
    }

    // Insert pairs in the correct order
    insertion(pairs, pairs.size());

    // Merge into the sorted array
    std::vector<int> pend;
    std::vector<int> sorted;
    merge(pairs, pend, sorted);

    // Add the straggler
    if (odd) {
        std::vector<int>::iterator it =
            std::lower_bound(sorted.begin(), sorted.end(), straggler);
        if (it == sorted.end())
            sorted.push_back(straggler);
        else
            sorted.insert(it, straggler);
    }

    return sorted;
}

std::deque<int> PmergeMe::mergeInsertionSort(std::deque<int> c) {
    if (c.size() < 2)
        return c;

    // Check whether the container has even or odd number of elements
    int straggler;
    bool odd = c.size() % 2 != 0;
    if (odd) {
        straggler = c.back();
        c.pop_back();
    }

    // Create pairs
    std::deque<int_pair> pairs;
    for (std::deque<int>::iterator it = c.begin(); it != c.end(); it += 2) {
        int_pair pair;
        int num1 = *it;
        int num2 = *(it + 1);
        pair.first = num1 > num2 ? num2 : num1;
        pair.second = num1 > num2 ? num1 : num2;
        pairs.push_back(pair);
    }

    // Insert pairs in the correct order
    insertion(pairs, pairs.size());

    // Merge into the sorted array
    std::deque<int> pend;
    std::deque<int> sorted;
    merge(pairs, pend, sorted);

    // Add the straggler
    if (odd) {
        std::deque<int>::iterator it =
            std::lower_bound(sorted.begin(), sorted.end(), straggler);
        if (it == sorted.end())
            sorted.push_back(straggler);
        else
            sorted.insert(it, straggler);
    }

    return sorted;
}

void PmergeMe::insertion(std::vector<int_pair> &pairs, int size) {
    if (size == 1)
        return;
    insertion(pairs, size - 1);

    int_pair last = pairs[size - 1];
    int i = size - 2;
    while (i >= 0 && pairs[i].second > last.second) {
        pairs[i + 1] = pairs[i];
        --i;
    }
    pairs[i + 1] = last;
}

void PmergeMe::insertion(std::deque<int_pair> &pairs, int size) {
    if (size == 1)
        return;
    insertion(pairs, size - 1);

    int_pair last = pairs[size - 1];
    int i = size - 2;
    while (i >= 0 && pairs[i].second > last.second) {
        pairs[i + 1] = pairs[i];
        --i;
    }
    pairs[i + 1] = last;
}

void PmergeMe::merge(std::vector<int_pair> &pairs, std::vector<int> &pend,
                     std::vector<int> &sorted) {
    // Add the larger into sorted
    for (std::vector<int_pair>::iterator it = pairs.begin(); it != pairs.end();
         it++) {
        pend.push_back(it->first);
        sorted.push_back(it->second);
    }

    // Put the first of smaller element in front
    sorted.insert(sorted.begin(), pend.front());
    if (!pend.empty())
        pend.erase(pend.begin());

    // Use jacobsthal nummber diff from 3
    for (int i = 3;; i++) {
        int diff = jacobsthalNum(i) - jacobsthalNum(i - 1);
        if (diff > static_cast<int>(pend.size()))
            break;
        for (int j = diff - 1; j >= 0; j--) {
            std::vector<int>::iterator it =
                std::lower_bound(sorted.begin(), sorted.end(), pend.at(j));
            sorted.insert(it, pend.at(j));
            pend.erase(pend.begin() + j);
        }
    }

    // Sort the rest backwards
    for (std::vector<int>::reverse_iterator it = pend.rbegin();
         it != pend.rend(); it++) {
        std::vector<int>::iterator current =
            std::lower_bound(sorted.begin(), sorted.end(), *it);
        sorted.insert(current, *it);
    }
}

void PmergeMe::merge(std::deque<int_pair> &pairs, std::deque<int> &pend,
                     std::deque<int> &sorted) {
    // Add the larger into sorted
    for (std::deque<int_pair>::iterator it = pairs.begin(); it != pairs.end();
         it++) {
        pend.push_back(it->first);
        sorted.push_back(it->second);
    }

    // Put the first of smaller element in front
    sorted.insert(sorted.begin(), pend.front());
    if (!pend.empty())
        pend.erase(pend.begin());

    // Use jacobsthal nummber diff from 3
    for (int i = 3;; i++) {
        int diff = jacobsthalNum(i) - jacobsthalNum(i - 1);
        if (diff > static_cast<int>(pend.size()))
            break;
        for (int j = diff - 1; j >= 0; j--) {
            std::deque<int>::iterator it =
                std::lower_bound(sorted.begin(), sorted.end(), pend.at(j));
            sorted.insert(it, pend.at(j));
            pend.erase(pend.begin() + j);
        }
    }

    // Sort the rest backwards
    for (std::deque<int>::reverse_iterator it = pend.rbegin();
         it != pend.rend(); it++) {
        std::deque<int>::iterator current =
            std::lower_bound(sorted.begin(), sorted.end(), *it);
        sorted.insert(current, *it);
    }
}

char const *PmergeMe::ParsingException::what(void) const throw() {
    return "Error: parsing error!";
}
char const *PmergeMe::DuplicateException::what(void) const throw() {
    return "Error: duplicate element!";
}
char const *PmergeMe::IntNegativeException::what(void) const throw() {
    return "Error: negative element!";
}
