/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:45:03 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 06:34:15 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    // Compiler would catch the following error
    // Animal test("wrong");
    AAnimal *test = new Cat();
    test->makeSound();
    delete test;
    return EXIT_SUCCESS;
}
