#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
    protected:
       
    public:
        Ice();
        Ice(Ice const & t);
        ~Ice();
        Ice const & operator=(Ice const & t);
        Ice * clone() const
        {
            std::cout << "Ice clone \n";
            return(NULL);
        }
        void    use(ICharacter& target);
};

#endif