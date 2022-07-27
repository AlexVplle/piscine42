# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 00:17:30 by avapaill          #+#    #+#              #
#    Updated: 2022/07/27 00:39:36 by avapaill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
EXEC = do-op
CFLAGS = -Wall -Wextra -Werror
SRC = src/atoi.c src/do-op.c src/operator.c src/putnbr.c
OBJ = $(SRC:.c=.o)

all: $(EXEC)

src/%.o: src/%.c
	$(CC) $(CFLAGS) -I header/ -c $< -o $@

$(EXEC): $(OBJ)
	$(CC) -o $(EXEC) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: clean all fclean re do-op
