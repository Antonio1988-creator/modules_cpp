NAME		= whatever
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
INCLUDES	= -I./include

SRC_DIR		= ./src
OBJ_DIR		= ./obj
DEP_DIR		= ./obj

SOURCES		= main.cpp
OBJECTS		= $(SOURCES:.cpp=.o)
OBJ			= $(addprefix $(OBJ_DIR)/, $(OBJECTS))
DEP			= $(addprefix $(DEP_DIR)/, $(OBJECTS:.o=.d))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -MMD -MP -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re
