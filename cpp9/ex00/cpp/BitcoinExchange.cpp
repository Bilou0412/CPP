#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(DataFile bdd, DataFile input)
{
  _logBicoin = new std::string[input.nbLineMap()];
  _size = input.nbLineMap();
  const std::multimap<std::string, double> &inputData = input.getCsv();
  std::multimap<std::string, double>::const_iterator it;
  int i = 0;
  for (it = inputData.begin(); it != inputData.end(); ++it)
  {
    std::ostringstream oss;
    double value = bdd.valOfKey(it->first);
    if (value < 0)
      oss << "Error : date too old no value in bdd";
    else if (it->first.find("Error") != std::string::npos)
      oss << it->first;
    else
      oss << it->first << "=> " << std::setprecision(2) << std::fixed << it->second << " = " << it->second * value;
    _logBicoin[i] = oss.str();
    i++;
  }
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
  *this = copy;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
  _logBicoin = src._logBicoin;
  return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
  delete[] _logBicoin;
}
size_t BitcoinExchange::getSize() const
{
  return (_size);
}

std::string *BitcoinExchange::getLog() const
{
  return (_logBicoin);
}
std::ostream &operator<<(std::ostream &os, const BitcoinExchange &exchange)
{
  for (size_t i = 0; i < exchange.getSize(); ++i)
    std::cout << exchange.getLog()[i] << std::endl;
  return (os);
}