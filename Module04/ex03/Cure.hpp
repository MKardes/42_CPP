#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
    protected:
       
    public:
        Cure();
        Cure(Cure const & t);
        ~Cure();
        Cure const & operator=(Cure const & t);
        Cure * clone() const
        {
            std::cout << "Cure clone \n";
            return (NULL);
        }
        void    use(ICharacter& target);
};

#endif