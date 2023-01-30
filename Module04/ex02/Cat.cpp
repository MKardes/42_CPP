#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "Cat constructed." << std::endl;
}

Cat::Cat(const Cat& t): Animal(t.type)
{
	*this = t;
	std::cout << "Cat copied." << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructed." << std::endl;
}

Cat& Cat::operator=(const Cat& t)
{
	this->type = t.type;
	this->brain = new Brain(*t.brain);
	std::cout << "Cat assigned" << std::endl;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << this->type << ": meowed ::>" << std::endl;
}
