#include "Converter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Incorrect argument count!!" << std::endl;
		return (0);
	}
	std::string str(av[1]);
	Converter::convert(str);
}
