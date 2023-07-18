/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:42:09 by dlu               #+#    #+#             */
/*   Updated: 2023/07/18 10:29:53 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(std::string filename)
    : _infile(filename), _outfile(filename + ".replace") {}
Replacer::~Replacer() {}

bool Replacer::execute(std::string find, std::string replace) {
    std::ifstream infile(_infile.c_str());
    if (!infile.is_open()) {
        std::cerr << "Failed to open file " << _infile << std::endl;
        return false;
    }
    std::ofstream outfile(_outfile.c_str());
    if (!outfile.is_open()) {
        std::cerr << "Failed to create file " << _outfile << std::endl;
        infile.close();
        return false;
    }
    std::string line;
    while (std::getline(infile, line)) {
        _replaceString(line, find, replace);
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    return true;
}

void Replacer::_replaceString(std::string &str, std::string const &s1,
                              std::string const &s2) {
    size_t pos = 0;

    while ((pos = str.find(s1, pos)) != std::string::npos) {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos += s2.length();
    }
}
