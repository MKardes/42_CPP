NAME = violence
SRC = Weapon.cpp main.cpp HumanA.cpp HumanB.cpp

CC = g++
CFLAGS = -Wall -Wextra -Werror -W -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
