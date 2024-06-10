#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
  if (argc < 3)
  {
    std::cout << "No enought number for sort" << std::endl;
    return (0);
  }
  try
  {
    PmergeMe list(argv, argc);
  }
  catch (std::runtime_error &e)
  {
    std::cout << e.what() << std::endl;
  }
}
