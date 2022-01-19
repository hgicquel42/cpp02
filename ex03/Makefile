NAME = fixed

INPUT = \
	main.cpp \
	Fixed.cpp \
	Point.cpp \
	bsp.cpp \

OUTPUT = ${INPUT:.cpp=.o}

all: ${NAME}

.c.o:	
	c++ -Wall -Wextra -Werror -g -c $< -o ${<:.c=.o}

${NAME}: ${OUTPUT}
	c++ -Wall -Wextra -Werror -g ${OUTPUT} -o ${NAME}

clean:
	rm -f ${OUTPUT}

fclean:	clean
	rm -f ${NAME}

re:		fclean all

test: $(NAME)
	./${NAME}