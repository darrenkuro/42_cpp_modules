/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 04:55:41 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 06:05:37 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

/**
 * The default construcot/destructor, copy assignment operator and constructor
 * are inherited, will work as long as attributes aren't const. (i.e. target)
 */
class ShrubberyCreationForm : public AForm {
  public:
    ShrubberyCreationForm(std::string target);
    virtual void execute(Bureaucrat const &executor) const;

    class FileException : public std::exception {
        char const *what() const throw();
    };

  private:
    std::string _target;
};

#endif // SHRUBBERYCREATIONFORM_HPP
