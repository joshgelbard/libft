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

#                     LIST


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
