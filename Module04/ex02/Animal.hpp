#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& t);
		virtual ~Animal();
		Animal& operator=(const Animal& t);
		
		void	setType(const std::string _type);
		std::string getType() const;
		virtual void	makeSound() const = 0;
};

#endif
