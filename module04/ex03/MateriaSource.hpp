/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 06:29:39 by dlu               #+#    #+#             */
/*   Updated: 2023/07/19 07:56:02 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
  public:
    MateriaSource();
    MateriaSource(MateriaSource const &t);
    ~MateriaSource();

    MateriaSource &operator=(MateriaSource const &t);

    void learnMateria(AMateria *materia);
    AMateria *createMateria(std::string const &type);

  private:
    static int const materiaSize = 4;

    AMateria *_materias[materiaSize];
    int _nLearned;
};

#endif // MATERIASOURCE_HPP
