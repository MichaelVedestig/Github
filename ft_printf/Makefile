# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/15 22:52:16 by mvedesti          #+#    #+#              #
#    Updated: 2021/12/14 12:28:59 by mvedesti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC = ft_printf.c ft_print_char.c ft_print_hex.c ft_print_int.c
BNS_SRC = *_bonus.c
LIBFT = libft/*.c

OBJ = *.o

all: $(NAME)
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -g -c $(SRC) $(LIBFT)
bonus: $(BNS_SRC)
	$(CC) $(CFLAGS) -g -c $(BNS_SRC) $(LIBFT)
	ar rc $(NAME) $(OBJ)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all, clean, fclean, re
