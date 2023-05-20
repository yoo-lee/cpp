CXX      = g++
CXXFLAGS = -Wall -Wextra -std=c++11
SRC      = main.cpp
OBJ_DIR  = obj
OBJ      = $(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))
NAME     = program

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o : %.cpp
	mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all
