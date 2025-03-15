CXX=g++
CXXFLAGS=-Wall -fsanitize=address,leak
LDFLAGS=-fsanitize=address,leak

.PHONY: all clean

all: l2

l2:  vector3.o main.o
	${CXX} main.o vector3.o -o l2
main.o: main.cpp
	${CXX} main.cpp -o main.o
vector3.o: vector3.cpp
	${CXX}-std=c++11 -c vector3.cpp -o vector3.o

clean:
	rm -f l2
