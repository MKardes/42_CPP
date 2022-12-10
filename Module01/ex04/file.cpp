#include "file.hpp"

std::string	file_read(char *file_name)
{
	char		ch;
        std::string	str;
	std::fstream	file_to_read;
	file_to_read.open(file_name, std::ios::in);
	if (file_to_read.fail())
	{
		std::cerr << "File to read couldn't be opened!!\n";
		str.clear();
		return (str);
	}

	while (!file_to_read.eof())
	{
		file_to_read >> std::noskipws>> ch;
		str += ch;
        }
	file_to_read.close();
	return (str);
}

void	fill_replace(char *name, std::string file, std::string s1, std::string s2)
{
	int		i = 0;
	int		s_word;
	std::string	file_name = std::string(name);
	std::fstream	file_to_write;
        file_to_write.open(file_name + ".replace", std::ios::out);
	if (file_to_write.fail())
	{
                std::cerr << "File to write couldn't be opened!!\n";
		return ;
	}
	
	while (i < (int)file.length())
	{
		s_word = file.find(s1, i);
		if (s_word != -1 && s_word == i)
		{
			file_to_write << s2;
			i += (int)s1.length();
		}
		else
		{
			file_to_write << file[i];
			i++;
		}
	}
	file_to_write.close();
}
