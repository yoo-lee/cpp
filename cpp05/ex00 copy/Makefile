NAME		= ex01

CC			= c++
SRCS		= main.cpp \
			Bureaucrat.cpp \
			Form.cpp

HEADERS		= Bureaucrat.h \
			Form.h

CC_FLAGS	= -Wall -Wextra -Werror
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