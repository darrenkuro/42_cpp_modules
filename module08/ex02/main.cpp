/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:33:25 by dlu               #+#    #+#             */
/*   Updated: 2023/08/24 16:13:23 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    MutantStack<int> b(mstack);

    std::cout << "std::list" << std::endl;
    std::list<int> mstack2;
    mstack2.push_back(5);
    mstack2.push_back(17);
    std::cout << mstack2.back() << std::endl;
    mstack2.pop_back();
    std::cout << mstack2.size() << std::endl;
    mstack2.push_back(3);
    mstack2.push_back(5);
    mstack2.push_back(737); //[...]
    mstack2.push_back(0);
    std::list<int>::iterator it2 = mstack2.begin();
    std::list<int>::iterator ite2 = mstack2.end();
    ++it2;
    --it2;
    while (it2 != ite2) {
        std::cout << *it2 << std::endl;
        ++it2;
    }

    std::cout << "custom tests" << std::endl;
    MutantStack<int> test = mstack;
    MutantStack<int>::iterator it3 = test.begin();
    std::cout << *it3 << std::endl;
    *it3 = 42;
    std::cout << *it3 << std::endl;
    MutantStack<int>::const_iterator cit = test.begin();
    std::cout << *cit << std::endl;
    // const means assignment is not allow but iterator itself is allowed to
    // move
    //*cit = 42;
    // std::cout << *cit << std::endl;
    MutantStack<int>::reverse_iterator it4 = test.rbegin() + 1;
    std::cout << *it4 << std::endl;
    *it4 = 42;
    std::cout << *it4 << std::endl;
    MutantStack<int>::const_reverse_iterator cit2 = test.rbegin() + 1;
    std::cout << *cit2 << std::endl;
    //*cit2 = 42;
    // std::cout << *cit2 << std::endl;
    return 0;
}
