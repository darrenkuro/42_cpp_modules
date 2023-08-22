/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:15:50 by dlu               #+#    #+#             */
/*   Updated: 2023/08/22 05:07:10 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
// For some reason cstdint wouldn't compile with c++98
#include <stdint.h>

class Serializer {
  public:
    Serializer();
    ~Serializer();
    Serializer(Serializer &t);

    Serializer &operator=(Serializer &t);

    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};

#endif // SERIALIZER_HPP
