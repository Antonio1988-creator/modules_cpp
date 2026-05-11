NAME		= convert
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
INCLUDES	= -I./include

SRC_DIR		= ./src
OBJ_DIR		= ./obj
DEP_DIR		= ./obj

SOURCES		= ScalarConverter.cpp main.cpp
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
	# Remove any stray object or dependency files that might have been generated in src/
	find $(SRC_DIR) -name "*.o" -type f -delete || true
	find $(SRC_DIR) -name "*.d" -type f -delete || true
	# Also remove any stray .o/.d at project root (defensive)
	find . -maxdepth 1 -name "*.o" -type f -delete || true
	find . -maxdepth 1 -name "*.d" -type f -delete || true

fclean: clean
	rm -f $(NAME) converter

re: fclean all

-include $(DEP)

.PHONY: all clean fclean re
