# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/15 22:52:16 by mvedesti          #+#    #+#              #
#    Updated: 2022/02/24 11:06:05 by mvedesti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_itoa_hex.c \
	ft_itoa.c \
	ft_putstr.c \
	ft_str_toupper.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlen.c \
	ft_strncpy.c \
	ft_print_char.c \
	ft_print_hex.c \
	ft_print_int.c \
	ft_printf.c

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -g -c $(SRC)
bonus: $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all, clean, fclean, re
