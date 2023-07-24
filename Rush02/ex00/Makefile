CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: rush-02
rush-02: main.c functions.c read_dic.c store_file.c
	$(CC) $(CFLAGS) -o rush-02 main.c functions.c read_dic.c store_file.c

fclean:
	rm -f rush-02