#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& t);
		~Dog();
		Dog& operator=(const Dog& t);

		void	makeSound() const;
};

#endif
