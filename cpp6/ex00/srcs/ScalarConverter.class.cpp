#include "ScalarConverter.class.hpp"



void	printSpecial(const std::string &input)
{
	std::cout << "char: impossible" << std::endl
			<< "int: impossible" << std::endl;
	if (input == "nan" || input == "nanf")
	{
		std::cout << "float: nanf" << std::endl
				<< "double: nan" << std::endl;
	}
	if (input == "-inf" || input == "-inff")
	{
		std::cout << "float: -inff" << std::endl
				<< "double: -inf" << std::endl;
	}
	if (input == "+inf" || input == "+inff")
	{
		std::cout << "float: +inff" << std::endl
				<< "double: +inf" << std::endl;
	}
}

bool	checkStr(const std::string &input)
{
	int	i = 0, nbDots = 0;

	if (input.size() > 1)
	{
		if ((input.c_str()[0] < '0' || input.c_str()[0] > '9')
				&& input.c_str()[0] != '-' && input.c_str()[0] != '+')
			return (true);
		if ((input.c_str()[0] == '-' || input.c_str()[0] == '+') && (input.c_str()[1] < '0' || input.c_str()[1] > '9'))
			return (true);
		i++;
		while (input.c_str()[i])
		{
			if (input.c_str()[i] == '.')
				nbDots++;
			if (nbDots > 1)
				return (true);
			if (input.c_str()[i] == 'f' && input.c_str()[i + 1])
				return (true);
			if (input.c_str()[i] != 'f' && (input.c_str()[i] < '0' || input.c_str()[i] > '9') && input.c_str()[i] != '.')
				return (true);
			i++;
		}
		
	}
	return (false);
}

int	wichType(const std::string &input)
{
	if (isInt(input))
		return (0);
	if (isDouble(input))
		return (1);
	if (isChar(input))
		return (2);
	if (isFloat(input))
		return (3);
	return (4);
}

void	ScalarConverter::convert(const std::string &input)
{
	if (input == "nan" || input == "nanf" || input == "-inf" || input == "+inf"
			|| input == "-inff" || input == "+inff")
	{
		printSpecial(input);
		return ;
	}
	if (checkStr(input))
	{
		std::cout << "error input\n";
		return ;
	}
	switch (wichType(input))
	{
		case 0:
			toInt(input);
			break;
		case 1:
			toDouble(input);
			break;
		case 2:
			toChar(input);
			break;
		case 3:
			toFloat(input);
			break;
	}	
}
