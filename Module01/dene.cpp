#include <iostream>

class Student{

	public:
		std::string a;
		std::string b;
		Student()
		{
			std::string s;
			std::string n;
			std::cout << "\nID: ";
			std::cin >> s;
			a = s;
			std::cout << "Name: ";
			std::cin >> n;
			b = n;
			std::cout << "\nHa bu: " << s << ", " << n << std::endl << std::endl;
		}
		~Student()
		{
			std::cout<<"destructer" << a << std::endl << b << std::endl;
		}
};

void	newStudent()
{
	Student a;
	std::cout << "oluştu\n";
}


int	main()
{
	Student new0;
	Student new1;

	std::cout << new0.a << "\\ " << new1.a<< "\nMain Last\n\n";
	newStudent();
}
