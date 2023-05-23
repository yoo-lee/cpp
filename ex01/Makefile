CXX=c++

CXXFFLAGS = -Wall -Werror -Wextra -std=c++98

all: RPN

RPN: RPN.o main.o
	$(CXX) $(CXXFLAGS) $^ -o $@

RPN.o: RPN.cpp RPN.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

main.o: main.cpp RPN.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f RPN *.o

fclean: clean
	rm -rf $(NAME)
	

re: fclean all

.PHONY: all clean fclean re