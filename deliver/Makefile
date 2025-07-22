#Variables
NAME = libft.a
TEST = test

SRC = ft_isalnum.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_memset.c
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
	$(CC) -lbsd -o $(TEST) testing.c $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(TEST)

re: fclean all