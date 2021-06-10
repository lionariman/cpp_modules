NAME = phonebook

CC = clang++
FL = -Wall -Wextra -Werror

SRCS =	PhoneBook.cpp utils.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CC) $(FL) -o $@ -cpp $^

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FL) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re