/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:45:03 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 13:22:42 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>

int main() {
    int const count = 4;
    Animal *animals[count];
    for (int i = 0; i < count; i++)
        animals[i] = i % 2 ? static_cast<Animal *>(new Dog()) : new Cat();

    std::cout << "============ Check deep copy =============" << std::endl;
    dynamic_cast<Cat *>(animals[0])
        ->getBrain()
        ->setIdea(0, "animal 0 cat, idea 0");
    dynamic_cast<Cat *>(animals[2])
        ->getBrain()
        ->setIdea(0, "animal 2 cat, idea 0");
    std::cout << dynamic_cast<Cat *>(animals[0])->getBrain()->getIdea(0)
              << std::endl;
    std::cout << dynamic_cast<Cat *>(animals[2])->getBrain()->getIdea(0)
              << std::endl;
    dynamic_cast<Cat *>(animals[2])
        ->getBrain()
        ->setIdea(0, "animal 2 cat, idea 0 NEW");
    // dynamic_cast<Cat *>(animals[0]) = dynamic_cast<Cat *>(animals[2]);
    std::cout << dynamic_cast<Cat *>(animals[0])->getBrain()->getIdea(0)
              << std::endl;
    std::cout << dynamic_cast<Cat *>(animals[2])->getBrain()->getIdea(0)
              << std::endl;

    Dog basic;
    { Dog tmp = basic; }
    std::cout << "============  DESTRUCTORS  =============" << std::endl;
    for (int i = 0; i < count; i++)
        delete animals[i];
    return EXIT_SUCCESS;
}
