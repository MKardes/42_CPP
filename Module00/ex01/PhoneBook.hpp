#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int	index;
		int	list_chc;

	public:
		PhoneBook();
		void	add(void);
		void	search(void);
};
