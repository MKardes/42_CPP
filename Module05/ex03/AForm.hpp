#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <fstream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_sign;
		const int			_signGrade;
		const int			_execGrade;
	public:
		AForm();
		AForm(std::string name, int signGrade, int execGrade);
		AForm(const AForm &copy);
		~AForm();
		AForm &operator=(const AForm &copy);

		std::string	getName() const;
		bool		getSign() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		void	beSigned(Bureaucrat &bure);

		virtual void	execute(Bureaucrat const & executor) const = 0;

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
		class FormNotSignedException: public std::exception
        {
            public:
                const char *what() const _NOEXCEPT;
        };
};

std::ostream &operator<<(std::ostream &o, AForm &s);

#endif
