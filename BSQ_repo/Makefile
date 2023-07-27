CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = bsq
SRC = functions.c main.c map.c map2.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -f $(OBJ)

clean:
	rm -f $(NAME)

re: