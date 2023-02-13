#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	{
		std::cout << std::endl << "-----------Test 1-----------" << std::endl;
		try
		{
			Intern someRandomIntern;
			AForm *rrf = someRandomIntern.makeForm("presidential pardon", "Ali");
			if (!rrf)
			{
				std::cout << "Adres yok" << std::endl;
			}
			else 
			std::cout << *rrf;
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
			Intern someRandomIntern;
            AForm *rrf = someRandomIntern.makeForm("press", "Ali");
            if (!rrf)
            {
                std::cout << "Adres yok" << std::endl;
            }
            else
            std::cout << *rrf;
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
        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}
