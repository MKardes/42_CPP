#include <iostream>

int main()
{
	char		s[] = "HI THIS IS BRAIN";
	char		*stringPTR = s;

	std::string	str = "HI THIS IS BRAIN";
	std::string	&stringREF = str;

	std::cout << "Ptr for stringPTR: " << &stringPTR << std::endl;
	std::cout << "Ptr for stringREF: " << &stringREF << std::endl;

	std::cout << "Value for stringPTR: " << stringPTR << std::endl;
    std::cout << "Value for stringREF: " << stringREF << std::endl;
}
