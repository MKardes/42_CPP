#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << "Cure created." << std::endl;
}

Cure::Cure(Cure const & t)
{
    *this = t;
    std::cout << "Cure copied." << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructed!" << std::endl;
}

Cure const & Cure::operator=(Cure const & t)
{
    this->type = t.getType();
    std::cout << "Cure's copy assignment called." << std::endl;
    return *this;
}

void    Cure::use(ICharacter& target)
{
    std::cout "* heals "<< target.getName() << "’s wounds *" << std::endl;
}
