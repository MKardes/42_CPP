#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& t);
		~WrongCat();
		WrongCat& operator=(const WrongCat& t);
		void	makeSound() const;
};

#endif
