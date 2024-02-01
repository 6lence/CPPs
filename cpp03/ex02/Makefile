MAKEFLAGS += --silent
NAME = FragTrap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

OBJ = ${SRC:.cpp=.o}

all: ${NAME}
	echo "Make done successfully !"

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME} -lpthread && echo "Successfully compiled !" || echo "Compiling error !"

%.o: %.c
	${CC} ${CFLAGS} -o $@ -c $<

clean:
	rm -f ${OBJ} && echo ".o Removed successfully." || echo "No .o to remove."

fclean:
	rm -f ${OBJ}
	rm -f ${NAME} && echo "Executable Removed successfully." || echo "Error cleaning Executable."

re: fclean all

.PHONY: all clean fclean re
