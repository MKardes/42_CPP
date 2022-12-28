#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal(std::string type);
		Animal(const Animal& t);
		~Animal();
		Animal& operator=(const Animal& t);
		
		void	setType(std::string _type);
		std::string getType();
};

#endif
