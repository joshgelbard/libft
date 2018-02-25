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

with_test_includes = -include assert.h -include string.h -include stdio.h -include stdlib.h -include ctype.h
testfile = test/test_$(f).c

test: all $(testfile)
	$(CC) -L. -lft -I. $(with_test_includes) $(testfile) && ./a.out

retest: re test
