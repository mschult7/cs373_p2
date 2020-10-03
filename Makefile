all: schultz_p2

schultz_p2: schultz_p2.o
	g++ schultz_p2.o -g -Wall -o $@

schultz_p2.o: schultz_p2.cpp
	g++ -c -g -Wall schultz_p2.cpp

clean:
	rm -f schultz_p2 *.o
