#include "Harl.class.hpp"
Harl::Harl(void)
{
  call_func[0] = &Harl::debug;
  call_func[1] = &Harl::info;
  call_func[2] = &Harl::warning;
  call_func[3] = &Harl::error;
  levelTab[0] = "DEBUG";
  levelTab[1] = "INFO";
  levelTab[2] = "WARNING";
  levelTab[3] = "ERROR";
}

Harl::~Harl(void) {}

void Harl::debug(void)
{
  std::cout << "[DEBUG]" << std::endl;
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !" << std::endl;
}
void Harl::info(void)
{
  std::cout << "[INFO]" << std::endl;
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning(void)
{
  std::cout << "[WARNING]" << std::endl;
  std::cout << " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
  std::cout << "[ERROR]" << std::endl;
  std::cout << "This is unacceptable ! I want to speak to the manager now" << std::endl;
}

void Harl::complain(std::string level)
{
  int i;
  for (i = 0; levelTab[i] != level && i <= 3; i++)
    ;
  if (i <= 3)
    (this->*call_func[i])();
  else
    std::cerr << "Usage: Harl [DEBUG || INFO || WARNING || ERROR]" << std::endl;
}