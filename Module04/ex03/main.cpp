#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    AMateria * a[2];
    a[0] = new Ice();
    a[1] = new Cure();
    std::cout << a[0]->getType() << std::endl;
    std::cout << a[1]->getType() << std::endl;
    delete a[0];
    delete a[1];
}