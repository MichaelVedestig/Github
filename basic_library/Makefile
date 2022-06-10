CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isdigit.c \
ft_isprint.c ft_isascii.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memcmp.c \
ft_memchr.c ft_memccpy.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
ft_strnstr.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c \
ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
ft_putendl_fd.c ft_strlen.c ft_strncmp.c ft_toupper.c ft_tolower.c \
ft_strmapi.c ft_strcpy.c ft_strcat.c
BNS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstmap.c ft_lstsize.c

OBJ = $(SRC:.c=.o)
BOBJ = $(BNS:.c=.o)
all: $(NAME)
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
bonus: $(BNS)
	$(CC) $(CFLAGS) -c $(BNS)
	ar rc $(NAME) $(BOBJ)
	ranlib $(NAME)
clean:
	rm -f $(OBJ) $(BOBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all, clean, fclean, re
