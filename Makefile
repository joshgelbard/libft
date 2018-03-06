target := libft.a
all: $(target)

sublibs :=
function_names :=

#                      LIBC STRING

sublibs += string
vpath ft_% string
function_names += memset bzero memcpy memccpy memmove memchr memcmp strlen \
				 strdup strcpy strncpy strcat strncat strlcat strchr strrchr \
				 strstr strnstr strcmp strncmp

#                      LIBC CTYPE

sublibs += ctype
vpath ft_% ctype
function_names += isalpha isdigit isalnum isprint toupper tolower isspace isupper islower

#                      LIBC STDLIB

sublibs += stdlib
vpath ft_% stdlib
function_names += ctoi strtol atoi

#                     STRING_EXT

sublibs += string_ext
vpath ft_% string_ext
function_names += memalloc memdel strnew strdel strclr striter striteri strmap strmapi \
				  strequ strnequ strsub strjoin strtrim strsplit itoa

#                     LIBC STDIO

sublibs += stdio
vpath ft_% stdio
function_names += putchar_fd putchar putstr_fd putstr putendl_fd putendl puts

#                     STDIO_EXT

sublibs += stdio_ext
vpath ft_% stdio_ext
function_names += putnbr_fd putnbr

#                     LIST

sublibs += list
vpath ft_% list
function_names += lstnew #lstdelone lstdel lstadd lstiter lstmap

#                 USEFUL VARIABLES
#-------------------------------------------------

sources := $(patsubst %, ft_%.c, $(function_names))
objects := $(sources:.c=.o)
headers := $(patsubst %, ft_%.h, $(sublibs))
includes := $(patsubst %, -I %, $(sublibs))


#           RESTRUCTURING TO 42 STANDARDS
#-------------------------------------------------

.PHONY: copyup copyclean

copyup:
	cp $(patsubst %, %/*.c, $(sublibs)) .
	cp $(patsubst %, %/*.h, $(sublibs)) .

copyclean:
	-mv libft.h libft.h.tmp
	-rm *.o *.h *.c
	-mv libft.h.tmp libft.h

#                    ACTUAL MAKE
#-------------------------------------------------

.PHONY: all clean fclean re

CC := gcc
SHELL := /bin/sh
CFLAGS := -Wall -Werror -Wextra


$(target): $(objects) $(headers) libft.h
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

testall: all
	find test -name "test*.c" -print -exec gcc $(CFLAGS) -L. -lft {} -o test.out \; -exec ./test.out \;
	rm ./test.out

testsome: all
	find test/$x -name "test*.c" -print -exec gcc $(CFLAGS) -L. -lft {} -o test.out \; -exec ./test.out \;
	rm ./test.out

testone: all
	find test -name "test*$x*.c" -print -exec gcc $(CFLAGS) -L. -lft {} -o test.out \; -exec ./test.out \;
	rm ./test.out


testclean:
	-rm -f test/*/*.o
	-rm -f ./test.out

retest: testclean testall
