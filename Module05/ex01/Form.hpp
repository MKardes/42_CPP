#ifndef FORM_HPP
# define FORM_HPP

class Form
{
	private:
		const std::string	_name;
		boolean				_sign;
		const int			_signGrade;
		const int			_execGrade;
	public:
		Form();
		Form(const Form &copy);
		~Form();
		Form &operator=(const Form &copy);

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

#endif
