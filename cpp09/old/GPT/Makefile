CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic -O2
SRCS = main.cpp BitcoinExchange.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean

all: btc

btc: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) btc
