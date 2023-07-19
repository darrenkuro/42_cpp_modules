/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:45:03 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 13:33:41 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>

int main() {
    // Compiler would catch the following error
    // AAnimal test1("wrong");
    AAnimal *test = new Cat();
    test->makeSound();
    delete test;
    return EXIT_SUCCESS;
}
