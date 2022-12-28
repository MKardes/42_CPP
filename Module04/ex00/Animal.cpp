#include "Animal.hpp"

Animal::Animal(std::string _type): type(_type)
{
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
	this->type = t.type;
	std::cout << "Animal assigned." << std::endl;
	return *this;
}

std::string Animal::getType()
{
	return (this->type);
}

void Animal::setType(std::string _type)
{
	this->type= _type;
}
