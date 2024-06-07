#include "RPN.hpp"

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    std::cerr << "Error" << std::endl;
    return (0);
  }
  try
  {
    Rpn Result(argv[1]);
    std::cout << Result << std::endl;
  }
  catch (const std::runtime_error &e)
  {
    std::cerr << e.what() << '\n';
  }
}