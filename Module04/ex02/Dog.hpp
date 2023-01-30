#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog& t);
		~Dog();
		Dog& operator=(const Dog& t);

		void	makeSound() const;
};

#endif
