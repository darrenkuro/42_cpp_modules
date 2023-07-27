/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:57:14 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 04:16:53 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <exception>
#include <iostream>

class Bureaucrat;

class Form {
  public:
    Form();
    ~Form();
    Form(Form const &t);
    Form(std::string name, unsigned int signGrade, unsigned int execGrade);

    Form &operator=(Form const &t);

    std::string const getName() const;
    unsigned int getSignGrade() const;
    unsigned int getExecGrade() const;
    bool getSigned() const;

    void beSigned(Bureaucrat &signer);

    class GradeTooHighException : public std::exception {
      public:
        GradeTooHighException(std::string const name, bool required);
        virtual ~GradeTooHighException() throw();
        virtual const char *what() const throw();

      private:
        std::string _msg;
    };
    class GradeTooLowException : public std::exception {
      public:
        GradeTooLowException(std::string const name, bool required);
        virtual ~GradeTooLowException() throw();
        virtual const char *what() const throw();

      private:
        std::string _msg;
    };

  private:
    static unsigned int const lowestGrade = 150;
    static unsigned int const highestGrade = 1;
    std::string const _name;
    unsigned int const _signGrade;
    unsigned int const _execGrade;
    bool _signed;
};

std::ostream &operator<<(std::ostream &os, Form const &t);

#endif // FORM_HPP
