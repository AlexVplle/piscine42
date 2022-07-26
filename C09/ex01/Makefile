# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avapaill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 11:43:49 by avapaill          #+#    #+#              #
#    Updated: 2022/07/25 17:56:15 by avapaill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
EXEC = libft.a
CFLAGS = -Wall -Wextra -Werror
SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJ = $(SRC:.c=.o)

all: $(EXEC)

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -I includes/ -c $< -o $@

$(EXEC): $(OBJ) 
	ar -rc $(EXEC) $(OBJ)
	ranlib $(EXEC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: clean all fclean re libft.a
