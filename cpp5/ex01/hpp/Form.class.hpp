#ifndef FORM_CLASS_HPP
#define FORM_CLASS_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.class.hpp"
class Bureaucrat;
class Form
{
public:
  // Constructeur
  Form(const int gradeSigned,const int gradeExecute, const std::string &name);
  Form(const Form &copy);

  // destructeur
  ~Form();

  // Surcharge d'operateur
  Form &operator=(const Form &src);

  // Foncion Publique
  void beSigned(Bureaucrat &Bureaucrate);

  // Getter
  const std::string getName() const;
  int getGradeSigned() const;
  int getGradeExecute() const;
  bool getSigned() const;

  // Class except
  class GradeTooHighException : public std::exception
  {
  public:
    virtual const char *what() const throw()
    {
      return ("Grade too High for the form");
    }
  };

  class GradeTooLowException : public std::exception
  {
  public:
    virtual const char *what() const throw()
    {
      return ("Grade too Low for the form");
    }
  };

private:
  const std::string _name;
  const int _gradeSigned;
  const int _gradeExecute;
  bool _signed;
};
std::ostream &operator<<(std::ostream &os, const Form &object);

#endif