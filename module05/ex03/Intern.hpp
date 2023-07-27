/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 06:33:34 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 07:38:07 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
  public:
    Intern();
    ~Intern();
    Intern(Intern const &t);

    Intern &operator=(Intern const &t);

    AForm *makeForm(std::string const form, std::string const target);

    class InvalidFormException : public std::exception {
      public:
        InvalidFormException(std::string const name);
        virtual ~InvalidFormException() throw();
        virtual char const *what() const throw();

      private:
        std::string _msg;
    };

  private:
    static int const _nForm = 3;
    static std::string const _formName[_nForm];
    static int getIndex(std::string const form);
};

#endif // INTERN_HPP
