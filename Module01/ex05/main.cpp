#include "Harl.hpp"

int main(void)
{
	Harl	h;

	h.complain("WARNING");
	h.complain("ERROR");
	h.complain("WARNING");
	h.complain("INFO");
	h.complain("DEBUG");

	return (0);
}
