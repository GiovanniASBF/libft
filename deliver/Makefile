#Variables
NAME = libft.a
TEST = test

SRC = ft_isalnum.c \
	ft_isalpha.c \
	ft_isdigit.c
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror 
#Rules
all: $(NAME)

$(NAME): $(OBJ)
	ar crs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(TEST): testing.c $(NAME)
	$(CC) -o $(TEST) testing.c $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all