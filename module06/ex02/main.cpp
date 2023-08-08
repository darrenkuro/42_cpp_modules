/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:00:11 by dlu               #+#    #+#             */
/*   Updated: 2023/08/08 14:14:12 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void) {
    // Seed random number generator
    std::srand(static_cast<unsigned int>(std::time(NULL)));

    Base *base;
    Base *base2;

    base = generate();
    base2 = generate();
    identify(base);
    identify(*base);
    identify(base2);
    identify(*base2);
    delete base;
    delete base2;
    return 0;
}
