
SRC = mat42.c mat_math_ops.c

NAME = libmat42.a

OBJ = mat42.o mat_math_ops.o

GCC = clang

all: $(NAME)

$(NAME):
	$(GCC) -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
