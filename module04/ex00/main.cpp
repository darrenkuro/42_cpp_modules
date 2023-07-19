/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:45:03 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 12:16:44 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;

    std::cout << "============Wrong animal & cat============" << std::endl;
    const WrongAnimal *wrongmeta = new WrongAnimal();
    // if declared as follows, it will be called correctly
    // const WrongCat *wrongcat = new WrongCat();
    const WrongAnimal *wrongcat = new WrongCat();
    wrongcat->makeSound();
    const WrongCat *wrongcat2 = new WrongCat();
    wrongcat2->makeSound();
    delete wrongmeta;
    delete wrongcat;
    delete wrongcat2;
    return 0;
}
