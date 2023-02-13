#include <iostream>

class A
{
	public:
		static void Dene()
		{
			std::cout << "Denendi\n";
		}

		void	Dene1()
		{
			std::cout << "Denendi1\n";
		}

};

int	main()
{
	A obj;

	obj.Dene();
	obj.Dene1();

	A::Dene();
	//A::Dene1();
}

int main()
{
	int a;

	Convert::isInt(a);
}
