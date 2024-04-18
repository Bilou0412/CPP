#include "Harl.class.hpp"

/*int main(int argc, char **argv)
{
  if (argc != 2)
    return (std::cerr << "Usage: Harl [DEBUG || INFO || WARNING || ERROR]" << std::endl, 0);
  Harl harl;
  harl.complain(argv[1]);
  return (0);
}*/

int main(void)
{
  Harl harl;
  harl.complain("DEBUG");
  harl.complain("INFO");
  harl.complain("WARNING");
  harl.complain("ERROR");
}
