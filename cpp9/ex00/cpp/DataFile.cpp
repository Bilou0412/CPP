#include "DataFile.hpp"
// Return the separator for getline

char DataFile::wichTypeFile(const char *firstL)
{
  std::string nameStr(firstL);
  if (nameStr.find("|") != std::string::npos)
    return ('|');
  else if (nameStr.find(",") != std::string::npos)
    return (',');
  std::cerr << "Error: File template format" << std::endl;
  return ('\0');
}
std::string DataFile::checkInput(const std::string &line)
{

  if (line.find('|') != std::string::npos)
  {
    std::stringstream ss(line);
    std::string dateOrValue;
    if (std::count(line.begin(), line.end(), '|') > 1)
      return (std::string("Error: multiple pipe | -1"));
    for (int i = 0; i < 2; i++)
    {
      getline(ss, dateOrValue, '|');
      if (dateOrValue.empty())
      {
        return (std::string("Error: bad input | -1"));
      }
      else
        return (line);
    }
  }
  if (line.empty())
    return (std::string("Error: empty line | -1"));
  return (std::string("Error: no pipe | -1"));
}

std::string DataFile::checkValue(const std::string &date, double value)
{
  if (value <= 0)
    return (std::string("Error: not a positive number "));
  else if (value >= 1000)
    return (std::string("Error: too large number "));
  return (date);
}
DataFile::DataFile(const char *name)
{
  std::fstream file(name, std::ios::in);
  std::string token, date, line;
  int nbL = 0, nbC = 0;
  char sep = '\0';
  if (file.is_open())
  {
    while (std::getline(file, line))
    {
      if(!nbL)
      sep = wichTypeFile(line.c_str());
      if (nbL > 0 && sep == '|')
        line = checkInput(line);
      std::stringstream ss(line);
      while (std::getline(ss, token, sep))
      {
        if (!nbC)
        {
          date = token;
          nbC++;
        }
        else if (nbC == 1 && nbL > 0)
        {
          nbC = 0;
          struct tm tm;
          memset(&tm, 0, sizeof(struct tm));
          if (strptime(date.c_str(), "%Y-%m-%d", &tm) == NULL && sep == '|')
          {
            if (date.find("Error") == std::string::npos)
              date = "Error: bad date ";
          }
          if (date.find("Error") == std::string::npos && sep == '|')
            date = checkValue(date, std::strtod(token.c_str(), NULL));
          _data.insert(std::make_pair(date, std::strtod(token.c_str(), NULL)));
        }
        else
        {
          nbC = 0;
          nbL++;
        }
      }
    }
  }
  else
    std::cout << "Could not open the file" << std::endl;
}

DataFile::DataFile(const DataFile &copy)
{
  *this = copy;
}

DataFile::~DataFile() {}

DataFile &DataFile::operator=(const DataFile &src)
{
  _data = src._data;
  return (*this);
}

std::multimap<std::string, double> DataFile::getCsv() const
{
  return (_data);
}

std::ostream &operator<<(std::ostream &os, const DataFile &csv)
{
  const std::multimap<std::string, double> &data = csv.getCsv();
  std::multimap<std::string, double>::const_iterator it;
  for (it = data.begin(); it != data.end(); ++it)
    os << it->first << "," << std::setprecision(2) << std::fixed << it->second << std::endl;
  return (os);
}
