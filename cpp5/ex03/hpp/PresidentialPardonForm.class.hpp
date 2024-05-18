#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
#define PRESIDENTIALPARDONFORM_CLASS_HPP
#include "AForm.class.hpp"
#include <iostream>
class PresidentialPardonForm : public AForm
{
public:
  // Constructeur
  PresidentialPardonForm(const std::string &name);
  PresidentialPardonForm(const PresidentialPardonForm &cpy);

  // Destructeur
  ~PresidentialPardonForm();

  // Fonction publique
  void execute(Bureaucrat const &executor) const;
  PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

private:
};

#endif