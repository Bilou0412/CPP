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
  void execute(Bureaucrat const &executor) const;

  // Surcharge d'operateur
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

private:
};

#endif