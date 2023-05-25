NAME		= btc

CC			= c++
SRCS		= main.cpp \
				BitcoinExchange.cpp \


HEADERS		= BitcoinExchange.hpp

CC_FLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

OBJS = $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
	$(CC) $(SRCS) $(CC_FLAGS) -o $(NAME)

%.o:		%.cpp $(HEADERS)
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re