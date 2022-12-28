#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

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
