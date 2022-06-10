# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 19:48:59 by mvedesti          #+#    #+#              #
#    Updated: 2022/02/24 10:37:37 by mvedesti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra
LIBFT_DIR = ./libft
LIBFT_LIB = libft/libftprintf.a
OBJ = $(SRC:.c=.o)
SRC = \
	client.c \
	client_bonus.c \
	server.c \
	server_bonus.c
all: mlibft
	$(CC) -c $(FLAGS) ./client.c
	$(CC) -o client ./client.o $(LIBFT_LIB)
	$(CC) -c $(FLAGS) ./server.c
	$(CC) -o server ./server.o $(LIBFT_LIB)
bonus: mlibft
	$(CC) -c $(FLAGS) ./client_bonus.c
	$(CC) -o client ./client_bonus.o $(LIBFT_LIB)
	$(CC) -c $(FLAGS) ./server_bonus.c
	$(CC) -o server ./server_bonus.o $(LIBFT_LIB)
mlibft:
	make -C libft
clean:
	rm -rf $(OBJ) client server
	make -C libft clean
fclean: clean
	make -C libft fclean
	rm -rf server client