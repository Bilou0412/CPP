#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
#define SHRUBBERYCREATIONFORM_CLASS_HPP
#include "AForm.class.hpp"
#include <iostream>
class ShrubberyCreationForm : public AForm
{
public:
  // Constructeur
  ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
  ShrubberyCreationForm(const std::string &name);

  // Destructeur
  ~ShrubberyCreationForm();

  // Fonction Publique
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
  void execute(Bureaucrat const &executor) const;

private:
};

#endif