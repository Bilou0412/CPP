#include "DataFile.hpp"
#include "BitcoinExchange.hpp"
int main(int argc, char *argv[])
{
  (void)argv;
  if (argc != 2)
  {
    std::cout << "Error: could not open file." << std::endl;
    return (0);
  }
  DataFile bdd("data.csv");
  DataFile input(argv[1]);
  BitcoinExchange exchange(bdd, input);
  std::cout << exchange << std::endl;
  return (0);
}