#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	h;
	int	start = -1;
	if(ac != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}

	std::string	states[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	the_level = std::string(av[1]);
	
	if (the_level == states[0])
		start = -1;
	else if (the_level == states[1])
		start = 0;
	else if (the_level == states[2])
		start = 1;
	else if (the_level == states[3])
		start = 2;
	else
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                return (2);
	}
	while (++start < 4)
		h.complain(states[start]);

	return (0);
}
