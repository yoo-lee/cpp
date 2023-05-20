NAME			= btc
CPP				= c++
FLAGS			= -Wall -Wextra -Werror -I -std=c++98
SRC				= main.cpp BitcoinExchange.cpp
INC				= BitcoinExchange.hpp
OBJ_DIR			= obj
OBJ				= $(addprefix $(OBJ_DIR)/, $(SRC:%.cpp=%.o))
all : $(NAME)
$(OBJ_DIR)/%.o : %.cpp $(INC)
	@mkdir -p $(dir $@)
# dir $@はターゲット名に含まれるディレクトリ部分を抽出するために使用
	$(CPP) $(FLAGS) -c $< -o $@
$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $^ -o $@
clean : 
	rm -rf $(OBJ_DIR)
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY : clean, fclean, all, re