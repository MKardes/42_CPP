#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << "Ice created." << std::endl;
}

Ice::Ice(Ice const & t)
{
    *this = t;
    std::cout << "Ice copied." << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destroyed" << std::endl;
}

Ice const & Ice::operator=(Ice const & t)
{
    this->type = t.getType();
    std::cout << "Ice's copy assignment called." << std::endl;
    return *this;
}

void    Ice::use(ICharacter& target)
{
    std::cout "* shoots an ice bolt at " << target.getName() << " *" << endl;
}