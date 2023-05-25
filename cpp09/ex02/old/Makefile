CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11 -O3
TARGET = pmergeme
SRCS = main.cpp PmergeMe.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp PmergeMe.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

PmergeMe.o: PmergeMe.cpp PmergeMe.hpp
	$(CXX) $(CXXFLAGS) -c PmergeMe.cpp

clean:
	rm -f $(OBJS) $(TARGET)
