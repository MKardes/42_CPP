#include "Converter.hpp"

Converter::Converter()
{
	std::cout << "Converter has been constructed." << std::endl;
}

Converter::Converter(const Converter & copy)
{
	*this = copy;
	std::cout << "Converter's copy constructer called." << std::endl;
}

Converter::~Converter()
{
	std::cout << "Converter has been destructed." << std::endl;
}

Converter &Converter::operator=(const Converter & copy)
{
	(void)copy;
	std::cout << "Converter's copy assignment called." << std::endl;
	return *this;
}

void	Converter::toChar(char a)
{
	int	num = a;
	if (a < 32 || (int)a == 127)
		a = 0;
	Converter::printer(a, num, num, num);
}

void	Converter::toInt(int num)
{
	int	ch = num;
	if (ch == 127 || (ch < 32 && ch > 0))
		ch = 0;
	if (ch < 0 || ch > 127)
		ch = -1;
	Converter::printer(ch, num, num, num);
}

void Converter::toFloat(float f)
{
	int ch = f;
    if (ch > 127 || ch < 32)
        ch = -1;

	float nb = f;
    if (nb > 2147483647 || nb < -2147483648)
        ch = -2;
	Converter::printer(ch, f, f, f);
}

void Converter::toDouble(double d)
{
	int ch = d;
    if (ch > 127 || ch < 32)
        ch = -1;

	double nb = d;
	if (nb > 2147483647 || nb < -2147483648)
		ch = -2;
	Converter::printer(ch, d, d, d);
}

void Converter::printer(char a, int num, float f, double d)
{
	int	temp = (int)f;

	if (a == 0)
		std::cout << "char: Non displayable" << std::endl;
	else if (a == -1 || a == -2 || a == -3)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << a << "'" << std::endl;
	
	if (a == -2 || a == -3)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << num << std::endl;

	if ((float)temp == f && a != -3)
	{
		std::cout << "float: " << f << ".0f" <<  std::endl;
		std::cout << "double: " << d << ".0" <<std::endl;
	}
	else if (a == -3)
	{
		std::cout << "float: " << "impossible" << std::endl;
		std::cout << "double: " << "impossible" << std::endl;
	}
	else
    {
        std::cout << "float: " << f << "f" <<std::endl;
        std::cout << "double: " << d <<std::endl;
    }
}

int	Converter::infinite_non_check(std::string str)
{
	std::string cases[] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};
	std::string kind;
	int	i = 0;
	while (i < 6)
	{
		if (cases[i] == str)
		{
			kind = cases[i % 3];
			break ;
		}
		i++;
	}
	if (i == 6)
		return (0);
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << kind << "f" <<std::endl;
	std::cout << "double: " << kind <<std::endl;
	return (1);
}

void	Converter::convert(std::string str)
{
	const char *cstr = str.c_str();
	int	d_c = 0;
	int	f_c = 0;
	
	if (Converter::infinite_non_check(str))
		return ;
	if (cstr[1] == '\0')
	{
		if (cstr[0] > '9' || cstr[0] < '0')
			Converter::printer(-3, 0, 0, 0);
		else
			Converter::toChar(cstr[0] - 48);
		return ;
	}
	int i = 0;
	while (cstr[i])
	{
		if (cstr[i] == '.')
		{
			if (i == 0 || cstr[i + 1] > '9' || cstr[i + 1] < '0')
				d_c++;
			d_c++;
		}
		if (cstr[i] == 'f')
		{
			if(cstr[i + 1] != '\0')
 				f_c++;
			f_c++;
		}
		else if (((cstr[i] > '9' || cstr[i] < '0') && cstr[i] != '.' && cstr[i] != '-') || f_c > 1 || d_c > 1)
		{
			Converter::printer(-3, 0, 0, 0);
			return ;
		}
		i++;
	}
	i = 0;
	try
	{
		if (d_c == 0 && f_c == 0)
		{
			toInt(std::stoi(str));
		}
		else if (f_c == 1 && d_c == 1)
		{
			toFloat(std::stof(str));
		}
		else if (f_c == 0 && d_c == 1)
		{
			toDouble(std::stod(str));
		}
		else
			std::cout << "Incorrect Form" << std::endl;
	}
	catch (const std::out_of_range & e)
	{
		try
		{
			Converter::printer(-2, 0, std::stof(str), std::stof(str));
		}
		catch(const std::out_of_range & e)
		{
			Converter::printer(-3, 0, 0, 0);
		}
		catch(...)
		{
			Converter::printer(-3, 0, 0, 0);
		}
	}
}
