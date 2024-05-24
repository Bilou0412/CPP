#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
#define ROBOTOMYREQUESTFORM_CLASS_HPP
#include "AForm.class.hpp"
#include <iostream>
class RobotomyRequestForm : public AForm
{
public:
  // Constructeur
  RobotomyRequestForm(const std::string &name);
  RobotomyRequestForm(const RobotomyRequestForm &cpy);

  // Destructeur
  ~RobotomyRequestForm();

  // Fonction publique
  void execute(Bureaucrat const &executor) const;

  // Surcharge d'operateur
  RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

private:
};

#endif