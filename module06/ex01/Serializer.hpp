/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:15:50 by dlu               #+#    #+#             */
/*   Updated: 2023/08/22 16:04:49 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
// For some reason cstdint wouldn't compile with c++98
#include <stdint.h>

class Serializer {
  public:
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);

  private:
    Serializer();
    ~Serializer();
    Serializer(Serializer &t);

    Serializer &operator=(Serializer &t);
};

#endif // SERIALIZER_HPP
