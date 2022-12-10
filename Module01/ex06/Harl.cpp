#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";	
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

Harl::Harl(void)
{
	this->func[0].name = "DEBUG";
	this->func[0].p_func = &Harl::debug;
	this->func[1].name = "INFO";
	this->func[1].p_func = &Harl::info;
	this->func[2].name = "WARNING";
	this->func[2].p_func = &Harl::warning;
	this->func[3].name = "ERROR";
	this->func[3].p_func = &Harl::error;
	std::cout << "Harl got defined!!\n";
}

Harl::~Harl(void)
{
	std::cout << "Time to say goodbye to Harl. We look forward to come again !!\n";
}

void Harl::complain(std::string level)
{
	int	i = 0;
	while (i < 4)
	{
		if (func[i].name == level)
		{
			std::cout << "[ " << func[i].name << " ]" << std::endl;
			(this->*(func[i].p_func))();
			break ;
		}
		i++;
	}
}
