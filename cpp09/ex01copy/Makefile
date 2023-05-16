CXX=g++
CXXFLAGS=-std=c++11 -Wall -Wextra -pedantic

all: RPN

RPN: RPN.o main.o
	$(CXX) $(CXXFLAGS) $^ -o $@

RPN.o: RPN.cpp RPN.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

main.o: main.cpp RPN.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f RPN *.o
