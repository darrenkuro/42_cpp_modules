/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 06:01:13 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 06:17:23 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
  public:
    PresidentialPardonForm(std::string target);
    virtual void execute(Bureaucrat const &executor) const;

  private:
    std::string _target;
};

#endif // PRESIDENTIALPARDONFORM_HPP
