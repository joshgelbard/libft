# recreating libc: string, ctype, stdlib, stdio
OBJ += ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o  ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o ft_strcmp.o ft_strncmp.o
OBJ += ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isprint.o ft_toupper.o ft_tolower.o ft_isspace.o ft_isupper.o ft_islower.o ft_isascii.o
OBJ += ft_strtol.o ft_atoi.o
OBJ += ft_putchar_fd.o ft_putchar.o ft_putstr_fd.o ft_putstr.o ft_putendl_fd.o ft_putendl.o ft_puts.o

# extending libc: string, stdio, stdlib
OBJ += ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_strsplit.o ft_itoa.o ft_strcasecmp.o ft_strncasecmp.o
OBJ += ft_putnbr_fd.o ft_putnbr.o ft_putbitsl.o ft_putbitsc.o ft_putbits.o
OBJ += ft_numlen.o ft_memtostr.o ft_ctoi.o

# other additions: ft_list
OBJ += ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o

SRC = $(OBJ:%.o=%.c)

.PHONY: all clean fclean re
.SECONDARY:

NAME = libft.a
CC = gcc
CFLAGS += -Wall -Werror -Wextra
AR = ar
ARFLAGS = rs
RM = rm -f

all: $(NAME)

$(NAME): $(SRC) libft.h
	$(CC) $(CFLAGS) -c $(SRC)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
