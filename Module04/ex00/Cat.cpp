#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat constructed." << std::endl;
}

Cat::Cat(const Cat& t): Animal(t.type)
{
	*this = t;
	std::cout << "Cat copied." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructed." << std::endl;
}

Cat& Cat::operator=(const Cat& t)
{
	this->type = t.type;
	std::cout << "Cat assigned" << std::endl;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << this->type << ": meowed ::>" << std::endl;
}
