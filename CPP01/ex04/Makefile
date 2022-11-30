NAME = main

CC = c++  
SRCS = main.cpp
FLAG = -Wall -Wextra -Werror -std=c++98 -O3

RM = rm -rf

OBJS = $(SRCS: .cpp = .o)

all: $(NAME)
	$(CC) $(SRCS) $(FLAGS) -o $(NAME)

%.o:	%.cpp
	$(CC) $(FLAGS) -c $< -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re

