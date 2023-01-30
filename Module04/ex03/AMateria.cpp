#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): type(type)
{
    std::cout << "A materia created." << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "Destructed the Material." << std::endl;
}

AMateria::AMateria(AMateria const &t)
{
    *this = t;
    std::cout << "Object Copied!" << std::endl;
}
AMateria const & AMateria::operator=(AMateria const &t)
{
    this->type = t.getType();
    std::cout << "Copy assignment operator called!" << std::endl;
    return(*this);
}

std::string const & AMateria::getType() const
{
    return(this->type);
} //Returns the materia type