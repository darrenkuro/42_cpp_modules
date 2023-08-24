/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:43:33 by dlu               #+#    #+#             */
/*   Updated: 2023/08/24 18:59:35 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>

class BitcoinExchange {
  public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(BitcoinExchange const &t);
    BitcoinExchange(std::string const &filename);

    BitcoinExchange &operator=(BitcoinExchange const &t);

  private:
    std::map<std::string, float> _data;
};

#endif // BITCOINEXCHANGE_HPP
