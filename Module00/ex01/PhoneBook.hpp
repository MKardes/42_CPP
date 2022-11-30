#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int	index = 0;
		int	list_chc = 0;

	public:
		void	add(void);
		void	search(void);
};
