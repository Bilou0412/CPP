#include "Bureaucrat.class.hpp"
#include "Form.class.hpp"

int main()
{
  try
  {
    Form invalid(200, 20, "yes");
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    Form invalid(20, 0, "yes");
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    Bureaucrat ish(25, "pi_r");
    Form valid(20, 20, "yes");

    ish.signForm(valid);
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    Bureaucrat ish(5, "pi_r");
    Form valid(20, 20, "yes");

    std::cout << valid << std::endl;
    ish.signForm(valid);
    std::cout << valid << std::endl;
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
  Form valid(25, 50, "yes");
  std::cout << valid << std::endl;
  Form copy(valid);
  std::cout << "copy " << copy << std::endl;
}