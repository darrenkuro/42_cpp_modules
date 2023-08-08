/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:32:30 by dlu               #+#    #+#             */
/*   Updated: 2023/08/08 14:46:52 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base *generate(void) {
    int i = std::rand() % 3;
    switch (i) {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    default:
        return new Base();
    }
}

void identify(Base *p) {
    if (dynamic_cast<A *>(p) != NULL) {
        std::cout << "Pointer is of class A!" << std::endl;
    } else if (dynamic_cast<B *>(p) != NULL) {
        std::cout << "Pointer is of class B!" << std::endl;
    } else if (dynamic_cast<C *>(p) != NULL) {
        std::cout << "Pointer is of class C!" << std::endl;
    } else {
        std::cout << "Pointer is of unknown type!" << std::endl;
    }
}

void identify(Base &p) {
    try {
        A &t = dynamic_cast<A &>(p);
        (void)t;
        std::cout << "Object is of class A!" << std::endl;
        return;
    } catch (...) {
    }

    try {
        B &t = dynamic_cast<B &>(p);
        (void)t;
        std::cout << "Object is of class B!" << std::endl;
        return;
    } catch (...) {
    }

    try {
        C &t = dynamic_cast<C &>(p);
        (void)t;
        std::cout << "Object is of class C!" << std::endl;
        return;
    } catch (...) {
    }

    std::cout << "Object is of unknown type!" << std::endl;
}
