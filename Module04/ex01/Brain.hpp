#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain& t);
		Brain& operator=(const Brain& t);

		std::string * getIdeas() const;
};

#endif
