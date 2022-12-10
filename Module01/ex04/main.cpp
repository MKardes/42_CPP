#include "file.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Argument error!";
		return (1);
	}
	std::string	file_str;
	std::string	s1 = std::string(av[2]);
	std::string	s2 = std::string(av[3]);
	
	file_str = file_read(av[1]);
	if (file_str.empty())
		return (2);
	fill_replace(av[1], file_str, s1, s2);
	return (0);
}
