#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_sign;
		const int			_signGrade;
		const int			_execGrade;
	public:
		Form();
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form &copy);
		~Form();
		Form &operator=(const Form &copy);

		std::string	getName() const;
		bool		getSign() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

		void	beSigned(Bureaucrat &bure);

		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const _NOEXCEPT;
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const _NOEXCEPT;
		};
};

std::ostream &operator<<(std::ostream &o, Form &s);

#endif
