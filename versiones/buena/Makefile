# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 08:21:01 by alex              #+#    #+#              #
#    Updated: 2024/11/25 22:01:40 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_printf_utils.c
OBJS = $(SRCS:.c=.o)
MAIN = test.c
P_NAME = test_printf
HEADERS = ft_printf.h


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

test: $(P_NAME) 

$(P_NAME): $(NAME) $(MAIN)
	$(CC) $(CFLAGS) $(MAIN) $(NAME) -o $(P_NAME)

clean:
	rm *.o
	
fclean:
	rm *.o | rm $(NAME)
	
tclean: fclean
	rm $(P_NAME)
	
re: fclean make

.PHONY: all clean fclean test tclean re
