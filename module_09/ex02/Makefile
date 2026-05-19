SRC = $(wildcard ./src/*.cpp)
NAME = PmergeMe
OBJ_DIR = obj
OBJ = $(patsubst ./src/%.cpp, $(OBJ_DIR)/%.o, $(SRC))
DEP = $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: ./src/%.cpp | $(OBJ_DIR)
	c++ -Wall -Wextra -Werror -std=c++98 -MMD -MP -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

-include $(DEP)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
