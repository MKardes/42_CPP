#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructed." << std::endl;
}

Brain::Brain(const Brain& t)
{
	*this = t;
	std::cout << "Brain copied." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructed." << std::endl;
}

std::string * Brain::getIdeas() const
{
	return((std::string *)this->ideas);
}

Brain& Brain::operator=(const Brain& t)
{
	std::string * ideas = t.getIdeas();
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = ideas[i];
		i++;
	}
	std::cout << "Brain assigned." << std::endl;
	return *this;
}
