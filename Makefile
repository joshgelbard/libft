.PHONY: all fclean re clean

target = libft.a

vpath ft_% string
includes = -I string
function_names = memset bzero memcpy memccpy memmove memchr memcmp strlen \
				 strdup strcpy strncpy strcat strncat strlcat strchr strrchr \
				 strstr strnstr strcmp strncmp

vpath ft_% ctype
includes += -I ctype
function_names += isalpha isdigit isalnum isprint toupper tolower isspace isupper islower

vpath ft_% stdlib
includes += -I stdlib
function_names += ctoi strtol atoi

headers = ft_string.h ft_stdlib.h ft_ctype.h
objects = $(patsubst %, ft_%.o, $(function_names))

SHELL = /bin/sh
CC = gcc
CFLAGS = -Wall -Wextra

all: $(target)

$(target): CFLAGS += -Werror $(includes)
$(target): $(objects) $(headers)
	ar rc $(target) $^
	ranlib $(target)

clean:
	-rm -f $(objects)

fclean: clean
	-rm -f $(target)

re: fclean
	make

#                      TESTS
#-------------------------------------------------
#-------------------------------------------------
#-------------------------------------------------

.PHONY: test testall testclean retest

vpath test% test test/stdlib test/ctype test/string

CFLAGS := $(CFLAGS) $(includes) -I test

test: testall

testall: all clean
	find test -name "test*.c" -exec gcc $(CFLAGS) -L. -lft {} -o test.out \; -exec ./test.out \;
	rm ./test.out

testclean:
	-rm -f test/*/*.o
	-rm -f ./test.out

retest: testclean testall
