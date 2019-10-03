CXXFLAGS=-std=c++11
main: main.o funcs.o
	g++ $(CXXFLAGS) -o main main.o funcs.o

test: test.o funcs.o
	g++ $(CXXFLAGS) -o test test.o funcs.o

test.o: test.cpp funcs.h
	g++ $(CXXFLAGS) -c test.cpp

main.o: main.cpp funcs.h
	g++ $(CXXFLAGS) -c main.cpp

funcs.o: funcs.cpp funcs.h
	g++ $(CXXFLAGS) -c funcs.cpp

clean:
	rm funcs.o main.
