CXX=g++ -std=c++20
CXXFLAGS=-Wall -fsanitize=address,leak
LDFLAGS=-fsanitize=address,leak

.PHONY: all clean

all: l2

l2:  vector3.o main.o
	${CXX} -fsanitize=address -g main.o vector3.o -o l2
main.o: main.cpp
	${CXX} -c main.cpp -o main.o
vector3.o: vector3.cpp
	${CXX} -c vector3.cpp -o vector3.o

clean:
	rm -f l2 main.o vector3.o
