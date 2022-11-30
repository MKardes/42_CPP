NAME = phonebook
SRC = Contact.cpp Contact.hpp main.cpp PhoneBook.cpp PhoneBook.hpp

CC = g++
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
