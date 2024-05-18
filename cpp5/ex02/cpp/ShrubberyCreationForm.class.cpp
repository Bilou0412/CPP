#include "ShrubberyCreationForm.class.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name) : AForm(145, 137, name)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
  if (executor.getGrade() >= this->getGradeExecute())
    throw GradeTooLowException();
  if (!this->getSigned())
    throw FormNotSigned();
  else
  {
    std::string outfileName(this->getName() + "_shrubbery");
    std::ofstream outputFile(outfileName.c_str());
    if (!outputFile.is_open())
    {
      std::cerr << "Erreur : Impossible d'ouvrir le fichier." << std::endl;
      return;
    }
    outputFile << "    _-_     \n"
                  "  /~~   ~~\\ \n"
                  " /~~         ~~\\ \n"
                  "{               } \n"
                  " \\  _-     -_  / \n"
                  "   ~  \\\\ //  ~   \n"
                  "_- -   | | _- _ \n"
                  "  _ -  | |   -_  \n"
                  "      \\\\ \\\\ \n";
  }
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
  (void)src;
  return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : AForm(145, 137, cpy.getName())
{
}