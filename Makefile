
SRC = mat42.c

NAME = libmat42.a

OBJ = mat42.o

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
