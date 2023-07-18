/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:38:27 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 10:26:31 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <fstream>
#include <iostream>

class Replacer {
  public:
    Replacer(std::string filename);
    ~Replacer();
    bool execute(std::string const find, std::string const replace);

  private:
    std::string const _infile;
    std::string const _outfile;
    static void _replaceString(std::string &str, std::string const &s1,
                               std::string const &s2);
};

#endif // REPLACER_HPP
