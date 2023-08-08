/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:09:43 by dlu               #+#    #+#             */
/*   Updated: 2023/08/08 15:12:54 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

class RPN {
  public:
    RPN();
    ~RPN();
    RPN(RPN const &t);

    RPN &operator=(RPN const &t);

  private:
};

#endif // RNP_HPP
