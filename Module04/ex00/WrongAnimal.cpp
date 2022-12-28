#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string _type): type(_type)
{
	std::cout << "WrongAnimal constructed." << std::endl;
}

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& t)
{
	*this = t;
	std::cout << "WrongAnimal copied." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructed." << std::endl;
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& t)
{
	this->setType(t.type);
	std::cout << "WrongAnimal assigned." << std::endl;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::setType(const std::string _type)
{
	this->type= _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrooooooong" << std::endl;
}
