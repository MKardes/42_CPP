#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	{
		std::cout << std::endl << "-----------Test 1-----------" << std::endl;
		try
		{
			Bureaucrat	b;
			Bureaucrat	b2("Musab", 100);
			std::cout << b << b2;
			ShrubberyCreationForm a("Ali");
			b.signForm(a);
			a.execute(b2);

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
            Bureaucrat  b("Musab", 100);
			Bureaucrat	b2("Ali", 43);
            std::cout << b;
            ShrubberyCreationForm f1("Halil");
			RobotomyRequestForm	f2;
            b.signForm(f1);
            f1.execute(b);
			b2.signForm(f2);
			f2.execute(b2);

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
            Bureaucrat  b("Musab", 100);
            Bureaucrat  b2("Ali", 46);
            std::cout << b;
            ShrubberyCreationForm f1("Halil");
            RobotomyRequestForm f2;
            b.signForm(f1);
            f1.execute(b);
            b2.signForm(f2);
            f2.execute(b2);

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
            Bureaucrat  b1("Musab", 5);
            Bureaucrat  b2("Ali", 20);
            std::cout << b1 << b2;
            PresidentialPardonForm f1("Halil");
            PresidentialPardonForm f2("Hakan");
            b1.signForm(f1);
			b2.signForm(f2);
            f1.execute(b1);
            f2.execute(b2);

        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}
