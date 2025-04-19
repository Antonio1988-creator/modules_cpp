CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = fragtrap
SRCS = main.cpp ClapTrap.cpp FragTrap.cpp # Añadir FragTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
