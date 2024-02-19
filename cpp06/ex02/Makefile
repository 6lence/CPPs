MAKEFLAGS += --silent
NAME = Identify
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp 
OBJ = ${SRC:.cpp=.o}

all: ${NAME}
	echo "Make done successfully !"

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME} && echo "Successfully compiled !" || echo "Compiling error !"

clean:
	rm -f ${OBJ} && echo ".o Removed successfully." || echo "No .o to remove."

fclean:
	rm -f ${OBJ}
	rm -f ${NAME} && echo "Executable Removed successfully." || echo "Error cleaning Executable."

re: fclean all

.PHONY: all clean fclean re
