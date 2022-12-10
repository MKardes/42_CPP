#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl{
	typedef struct s_funcs {
		std::string	name;
		void(Harl::*p_func)(void);
	}	t_funcs;

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		t_funcs	func[4];

	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);
};

#endif
