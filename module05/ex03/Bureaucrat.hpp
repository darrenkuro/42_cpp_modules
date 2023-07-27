/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:19:24 by dlu               #+#    #+#             */
/*   Updated: 2023/07/27 07:38:42 by dlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>

class AForm;

class Bureaucrat {
  public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &t);
    Bureaucrat(std::string name, unsigned int grade);

    Bureaucrat &operator=(Bureaucrat const &t);

    std::string const getName(void) const;
    unsigned int getGrade(void) const;
    void incrementGrade(void);
    void decrementGrade(void);
    void signForm(AForm &form);
    void executeForm(AForm &form);

    class GradeTooHighException : public std::exception {
      public:
        GradeTooHighException(std::string const name);
        virtual ~GradeTooHighException() throw();
        virtual char const *what() const throw();

      private:
        std::string const _msg;
    };
    class GradeTooLowException : public std::exception {
      public:
        GradeTooLowException(std::string const name);
        virtual ~GradeTooLowException() throw();
        virtual char const *what() const throw();

      private:
        std::string const _msg;
    };

  private:
    static unsigned int const lowestGrade = 150;
    static unsigned int const highestGrade = 1;
    std::string const _name;
    unsigned int _grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &t);

#endif // BUREAUCRAT_HPP
