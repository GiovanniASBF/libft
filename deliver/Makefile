#Variables
NAME = libft.a

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

CC == cc
CFLAGS = -Wall -Wextra -Werror 
#Rules
$(NAME): $(OBJ)
	ar crs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
