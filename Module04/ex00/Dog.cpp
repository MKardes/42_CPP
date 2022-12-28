#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog constructed." << std::endl;
}

Dog::Dog(const Dog& t): Animal(t.type)
{
	*this = t;
	std::cout << "Dog copied." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructed." << std::endl;
}

Dog& Dog::operator=(const Dog& t)
{
	this->type = t.type;
	std::cout << "Dog assigned" << std::endl;
	return *this;
}

void	Dog::makeSound()
{
	std::cout << this->type << ": barked ::>" << std::endl;
}
