/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:16:31 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/09 19:47:00 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat
{
	private:
		std::string _name;
		int			_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &copy);

		void	setName(std::string name);
		std::string	getName(void) const;

		void	setGrade(int	grade);
		int		getGrade(void) const;

		void	gradeUp(void);
		void	gradeDown(void);

		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const _NOEXCEPT;
		};
		class GradeTooLowException: public std::exception	{
			public:
				const char *what() const _NOEXCEPT;
		};

};

std::ostream & operator<<(std::ostream &o, Bureaucrat &s);

#endif
