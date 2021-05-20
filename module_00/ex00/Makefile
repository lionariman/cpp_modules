# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: keuclide <keuclide@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/20 09:17:33 by keuclide          #+#    #+#              #
#    Updated: 2021/05/20 09:23:38 by keuclide         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++
FL = -Wall -Wextra -Werror

SRCS =	megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CC) $(FL) -o $@ -c $^

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re