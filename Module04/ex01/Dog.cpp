#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "Dog constructed." << std::endl;
}

Dog::Dog(const Dog& t): Animal(t.type)
{
	*this = t;
	std::cout << "Dog copied." << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructed." << std::endl;
}

Dog& Dog::operator=(const Dog& t)
{
	this->type = t.type;
	this->brain = new Brain(*t.brain);
	std::cout << "Dog assigned" << std::endl;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << this->type << ": barked ::>" << std::endl;
}
