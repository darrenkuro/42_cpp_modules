/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:07:16 by dlu               #+#    #+#             */
/*   Updated: 2023/08/08 15:09:29 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

class PmergeMe {
  public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(PmergeMe const &t);

    PmergeMe &operator=(PmergeMe const &t);

  private:
};

#endif // PMERGEME_HPP
