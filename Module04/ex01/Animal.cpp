#include "Animal.hpp"

Animal::Animal(std::string _type): type(_type)
{
	std::cout << "Animal constructed." << std::endl;
}

Animal::Animal()
{
	this->setType("NoTypeAnimal");
    std::cout << "Animal constructed." << std::endl;
}

Animal::Animal(const Animal& t)
{
	*this = t;
	std::cout << "Animal copied." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructed." << std::endl;
}


Animal& Animal::operator=(const Animal& t)
{
	this->setType(t.getType());
	std::cout << "Animal assigned." << std::endl;
	return *this;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::setType(const std::string _type)
{
	this->type= _type;
}

void Animal::makeSound() const
{
	std::cout << "Wraa!!!'!" << std::endl;
}
