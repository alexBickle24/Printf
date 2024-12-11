# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 08:21:01 by alex              #+#    #+#              #
#    Updated: 2024/11/26 00:21:33 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_printf_utils.c
OBJS = $(SRCS:.c=.o)
NAME = ft_printf.a

MAIN = test.c
P_NAME = test_printf
HEADERS = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

test: message $(P_NAME) mesage2

message: 
	@echo "                    _-       /--______"
	@echo "               __--( /     \\ )XXXXXXXXXXX\\v."
	@echo "             .-XXX(   O   O  )XXXXXXXXXXXXXXX-"
	@echo "            /XXX(       U     )        XXXXXXX\\"
	@echo "          /XXXXX(              )--_  XXXXXXXXXXX\\"
	@echo "         /XXXXX/ (      O     )   XXXXXX   \\XXXXX\\"
	@echo "         XXXXX/   /            XXXXXX   \\__ \\XXXXX"
	@echo "         XXXXXX__/          XXXXXX         \\__---->"
	@echo " ---___  XXX__/          XXXXXX      \\__         /"
	@echo "   \\-  --__/   ___/\\  XXXXXX            /  ___--/="
	@echo "    \\-\\    ___/    XXXXXX              '--- XXXXXX"
	@echo "       \\-\\/XXX\\ XXXXXX                      /XXXXX"
	@echo "         \\XXXXXXXXX   \\                    /XXXXX/"
	@echo "          \\XXXXXX      >                 _/XXXXX/"
	@echo "            \\XXXXX--__/              __-- XXXX/"
	@echo "             -XXXXXXXX---------------  XXXXXX-"
	@echo "                \\XXXXXXXXXXXXXXXXXXXXXXXXXX/"
	@echo ""
	@echo ""

mesage2:
	@echo ""
	@echo "HAS COMPILADO EL: "$(MAIN) 

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
