/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:38:27 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 12:18:33 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <fstream>
#include <iostream>

class Replace {
  public:
    Replace(std::string filename);
    ~Replace();
    bool execute(std::string const find, std::string const replace);

  private:
    std::string const _infile;
    std::string const _outfile;
};

#endif // REPLACE_HPP
