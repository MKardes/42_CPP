#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& t);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& t);
		
		void	setType(const std::string _type);
		std::string getType() const;
		virtual void	makeSound() const;
};

#endif
