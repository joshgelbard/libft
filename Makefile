.PHONY: all
.PHONY: fclean
.PHONY: re
.PHONY: clean

sources = $(wildcard ./ft_*.c)
objects = $(sources:.c=.o)
target = libft.a

SHELL = /bin/sh
CC = gcc
CFLAGS = -Werror -Wextra -Wall -I.

all: $(target)

$(target): $(objects)
	ar rc $(target) $^
	ranlib $(target)

clean:
	-rm -f $(objects)

fclean: clean
	-rm -f $(target)

re: fclean
	make
