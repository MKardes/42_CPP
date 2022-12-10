#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <fstream>

std::string file_read(char *file_name);
void	fill_replace(char *name, std::string in_file, std::string to_be_replaced, std::string to_put);

#endif
