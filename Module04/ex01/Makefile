NAME = animal
SRC = Animal.cpp Dog.cpp Cat.cpp main.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
