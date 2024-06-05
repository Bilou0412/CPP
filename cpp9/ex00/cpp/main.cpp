#include "DataFile.hpp"
int main(int argc, char *argv[])
{
  (void)argv;
  if (argc != 2)
  {
    std::cout << "Error: could not open file." << std::endl;
    return (0);
  }
  DataFile Txt(argv[1]);
  std::cout << Txt << std::endl;
  return (0);
}