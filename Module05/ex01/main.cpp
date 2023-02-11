#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main()
{
	{
		std::cout << std::endl << "-----------Test 1-----------" << std::endl;
		try
		{
			Form a("Work1", 20, 45);
			Form b(a);
			Form c;
		   	c = a;
			std::cout << a << b << c;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
        std::cout << std::endl << "-----------Test 2-----------" << std::endl;
        try
        {
			Bureaucrat	a("Musab", 35);
			Bureaucrat	b("Ali", 40);
			Bureaucrat	c("Ayşe", 20);
			std::cout << a << b << c;
			Form		f("Work1", 35, 45);
			a.signForm(f);
			b.signForm(f);
			c.signForm(f);
        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
	{
		std::cout << std::endl << "-----------Test 3-----------" << std::endl;
		try
		{
			Bureaucrat	a("Musab", 1);
			Bureaucrat	b("Ali", 40);
            Bureaucrat	c("Ayşe", 20);
			std::cout << a << b << c;
			Form f1("Work 1", 40, 50);
			std::cout << f1;
			Form f2;
			std::cout << f2;
			a.signForm(f1);
			std::cout << a;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
        std::cout << std::endl << "-----------Test 4-----------" << std::endl;
        try
        {
            Form f1("Work 1", -1, 50);
        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
	{
        std::cout << std::endl << "-----------Test 5-----------" << std::endl;
        try
        {
            Form f1("Work 1", 20, 250);
        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}
