SRC = $(wildcard *.cpp)  # Lista de archivos .cpp en el directorio
OBJ = $(SRC:.cpp=.o)     # Lista de archivos objeto
DEP = $(OBJ:.o=.d)       # Lista de archivos de dependencias

NAME = Animal
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

# Regla principal
all: $(NAME)

# Compilación del ejecutable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Regla para compilar archivos .cpp a .o con generación de dependencias
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# Incluir dependencias generadas automáticamente
-include $(DEP)

# Limpieza de archivos intermedios
clean:
	$(RM) $(OBJ) $(DEP)

# Limpieza total incluyendo el ejecutable
fclean: clean
	$(RM) $(NAME)

# Recompilación completa
re: fclean all

# Evita conflictos con archivos que se llamen igual que estas reglas
.PHONY: all clean fclean re

