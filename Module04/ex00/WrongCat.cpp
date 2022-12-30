#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructed." << std::endl;
}

WrongCat::WrongCat(const WrongCat& t): WrongAnimal(t.type)
{
	*this = t;
	std::cout << "WrongCat copied." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructed." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& t)
{
	this->type = t.type;
	std::cout << "WrongCat assigned" << std::endl;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << this->type << "Wrong Cat sound" << std::endl;
}
