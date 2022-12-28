#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& t);
		~Cat();
		Cat& operator=(const Cat& t);
		void	makeSound();
};

#endif
