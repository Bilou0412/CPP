
#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"

int main()
{
  try
  {
    Bureaucrat valid(26, "valid");
    Bureaucrat invalid(30, "invalid");
    ShrubberyCreationForm yes("yes");
    PresidentialPardonForm pres("hmm");

    std::cout << valid << std::endl;
    valid.signForm(yes);
    valid.executeForm(yes);
    valid.signForm(pres);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
    return (1);
  }
}