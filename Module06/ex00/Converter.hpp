#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>

class Converter
{
	private:
		
	public:
		Converter();
		Converter(const Converter & copy);
		~Converter();
		Converter &operator=(const Converter & copy);

		static void	toChar(char a);
		static void	toInt(int num);
		static void	toFloat(float f);
		static void	toDouble(double d);

		static void	printer(char a, int num, float f, double d);
		static int infinite_non_check(std::string str);

		static void	convert(std::string	str);
};

#endif
