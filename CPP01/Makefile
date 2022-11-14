$NAME = zombie

CC = c++;

FLAG = -Wall -Wextra -Werror -std=c++98 -O3

SRCS = main.cpp \
		Zombie.cpp \

HEADERS = Zombie.hpp

RM = rm -rf

OBJS = $(SRCS:%.c = %.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) $(SRCS) $(FLAGS) -o $(NAME)

%.o:		%.cpp $(HEADERS)
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re: clean all







