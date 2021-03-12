GPP = g++ -std=c++17

all: main.o
	$(GPP) main.o -o MAIN

main.o: main.cpp
	$(GPP) -c main.cpp

clean:
	rm *.o
	rm MAIN
