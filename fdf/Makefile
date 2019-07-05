NAME = fdf.a
SRC = addx.c \
	  main.c \
	  addo.c \
	  addob.c \
	  my_mouse_funct.c \
	  finish.c \
	  reset.c \
	  grid.c

OBJ = $(SRC:%.c=%.o)

all:
	gcc -c $(SRC)
	gcc -g $(SRC) mlx/libmlx.a -lmlx -framework OpenGL -framework AppKit -o mlc
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
