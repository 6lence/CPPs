MAKEFLAGS += --silent
NAME = Materia
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC =	main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp

OBJ = ${SRC:.cpp=.o}

all: ${NAME}
	echo "Make done successfully !"

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -g -o ${NAME} -lpthread && echo "Successfully compiled !" || echo "Compiling error !"

clean:
	rm -f ${OBJ} && echo ".o Removed successfully." || echo "No .o to remove."

fclean:
	rm -f ${OBJ}
	rm -f ${NAME} && echo "Executable Removed successfully." || echo "Error cleaning Executable."

re: fclean all

.PHONY: all clean fclean re
