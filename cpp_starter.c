#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	cpp_create(char *str, char *cpp)
{
	FILE * fd = fopen(cpp, "wr");
	fprintf(fd, "#include \"%s.hpp\"\n\n",str);
	fprintf(fd, "%s::%s()\n{\n\tstd::cout << \"%s has been constructed.\";\n}\n",str,str,str);
	fprintf(fd, "\n%s::%s(const %s & copy)\n{\n\t*this = copy;\n\tstd::cout << \"%s's copy constructer called.\";\n}\n", str, str, str, str);
	fprintf(fd, "\n%s::~%s()\n{\n\tstd::cout << \"%s has been destructed.\";\n}\n",str,str,str);
	fprintf(fd, "\n%s &%s::operator=(const %s & copy)\n{\n\t(void)copy;\n\tstd::cout << \"%s's copy assignment called.\";\n}\n",str,str,str,str);
	fclose(fd);
}

void    hpp_create(char *str, char *hpp)
{
        FILE * fd = fopen(hpp, "wr");
	char *define = strdup(hpp);
	int i = 0;
	while(define[i])
	{
		define[i] = (char)toupper(define[i]);
		i++;
	}
	define[i -4] = '_';
	fprintf(fd, "#ifndef %s\n# define %s\n\n",define, define);
	fprintf(fd, "# include <iostream>\n\nclass %s\n\{\n\tprivate:\n\t\t\n\tpublic:\n",str);
        fprintf(fd, "\t\t%s();\n\t\t%s(const %s & copy);\n\t\t~%s();\n\t\t%s &operator=(const %s & copy);\n};",str,str,str,str,str,str);
	fprintf(fd, "\n\n#endif\n");
    fclose(fd);
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (-1);
	char *cpp = strcat(strdup(av[1]),strdup(".cpp"));
	char *hpp = strcat(strdup(av[1]),strdup(".hpp"));
	cpp_create(av[1], cpp);
	hpp_create(av[1], hpp);
}
