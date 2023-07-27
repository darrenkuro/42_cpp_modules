/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 02:57:14 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 05:46:24 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <exception>
#include <iostream>

class Bureaucrat;

class AForm {
  public:
    AForm();
    ~AForm();
    AForm(AForm const &t);
    AForm(std::string name, unsigned int signGrade, unsigned int execGrade);

    AForm &operator=(AForm const &t);

    std::string const getName() const;
    unsigned int getSignGrade() const;
    unsigned int getExecGrade() const;
    bool getSigned() const;

    void beSigned(Bureaucrat &signer);
    virtual void execute(Bureaucrat const &executor) const = 0;

    class GradeTooHighException : public std::exception {
      public:
        GradeTooHighException(std::string const name, bool required);
        virtual ~GradeTooHighException() throw();
        virtual char const *what() const throw();

      private:
        std::string _msg;
    };
    class GradeTooLowException : public std::exception {
      public:
        GradeTooLowException(std::string const name, bool required);
        virtual ~GradeTooLowException() throw();
        virtual char const *what() const throw();

      private:
        std::string _msg;
    };
    class NotSignedException : public std::exception {
      public:
        NotSignedException(std::string const name);
        virtual ~NotSignedException() throw();
        virtual char const *what() const throw();

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

std::ostream &operator<<(std::ostream &os, AForm const &t);

#endif // AFORM_HPP
