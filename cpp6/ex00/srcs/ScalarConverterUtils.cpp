
#include "ScalarConverter.class.hpp"

bool isInt(const std::string &input)
{
	char *end;

	std::strtol(input.c_str(), &end, 10);
	if (end[0] == '\0')
		return (true);
	return (false);
}

bool isDouble(const std::string &input)
{
	char *end;
	size_t dot = input.find('.');

	std::strtod(input.c_str(), &end);
	if (end[0] == '\0' && dot != std::string::npos)
		return (true);
	return (false);
}

bool isChar(const std::string &input)
{
	if (input.size() == 1)
		return (true);
	return (false);
}

bool isFloat(const std::string &input)
{
	if (input[input.size() - 1] == 'f')
		return (true);
	return (false);
}

void toChar(const std::string &str)
{
	if (std::isprint(str[0]))
		std::cout << "char : '" << str[0] << "'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
	std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(str[0]) << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(str[0]) << std::endl;
}

void toInt(const std::string &str)
{
	double i = std::atol(str.c_str());
	long long nb = static_cast<long long>(i);

	if (std::isprint(static_cast<char>(i)))
		std::cout << "char : '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
	if (nb < INT_MIN || nb > INT_MAX)
		std::cout << "int : out of range" << std::endl;
	else
		std::cout << "int : " << nb << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void toFloat(const std::string &str)
{
	float f = std::atof(str.c_str());
	long i = static_cast<long>(f);

	if (std::isprint(static_cast<char>(f)))
		std::cout << "char : '" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
	if (i < INT_MIN || i > INT_MAX)
		std::cout << "int : out of range" << std::endl;
	else
		std::cout << "int : " << i << std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void toDouble(const std::string &str)
{
	double d = std::atof(str.c_str());
	long i = static_cast<long>(d);

	if (std::isprint(static_cast<char>(d)))
		std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
	if (i < INT_MIN || i > INT_MAX)
		std::cout << "int : out of range" << std::endl;
	else
		std::cout << "int : " << i << std::endl;
	std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<double>(d) << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
}