#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const & type);
        AMateria(AMateria const &t);
        virtual ~AMateria();
        AMateria const & operator=(AMateria const &t);

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif