#ifndef AFORM_CLASS_HPP
#define AFORM_CLASS_HPP

#include <iostream>
#include <stdexcept>
#include <fstream>
#include <stdlib.h>
#include "Bureaucrat.class.hpp"
class Bureaucrat;
class AForm
{
public:
  // Constructeur
  AForm();
  AForm(const int gradeSigned, const int gradeExecute, const std::string &name);
  AForm(const AForm &copy);

  // destructeur
  virtual ~AForm();

  // Surcharge d'operateur
  AForm &operator=(const AForm &src);

  // Foncion Publique
  void beSigned(Bureaucrat &Bureaucrate);
  virtual void execute(Bureaucrat const &executor) const = 0;

  // Getter
  const std::string getName() const;
  int getGradeSigned() const;
  int getGradeExecute() const;
  bool getSigned() const;

  // Class except
  class GradeTooHighException : public std::exception
  {
  public:
    virtual const char *what() const throw();
  };

  class GradeTooLowException : public std::exception
  {
  public:
    virtual const char *what() const throw();
  };

  class FormNotSigned : public std::exception
  {
  public:
    virtual const char *what() const throw();
  };

private:
  const std::string _name;
  const int _gradeSigned;
  const int _gradeExecute;
  bool _signed;
};
std::ostream &operator<<(std::ostream &os, const AForm &object);

#endif