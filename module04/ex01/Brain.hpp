/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 22:55:22 by dlu               #+#    #+#             */
/*   Updated: 2023/07/13 02:09:15 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
  public:
    Brain();
    ~Brain();
    Brain(Brain const &t);

    Brain &operator=(Brain const &t);

    std::string getIdea(int index) const;
    void setIdea(int index, std::string idea);

  private:
    static int const _nIdea = 100;
    std::string _ideas[_nIdea];
};

#endif // BRAIN_HPP
