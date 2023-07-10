/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:42:09 by dlu               #+#    #+#             */
/*   Updated: 2023/07/11 07:59:31 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename)
    : _infile(filename), _outfile(filename + ".replace") {}
Replace::~Replace() {}

bool Replace::execute(std::string find, std::string replace) {
    std::ifstream inFile(_infile);
    if (!inFile.is_open()) {
        std::cerr << "Failed to open file " << _infile << std::endl;
        return false;
    }
    std::ofstream outFile(_outfile);
}
