all: nbaplayersStructs.o
	gcc -o program nbaplayersStructs.o

nbaplayersStructs.o: nbaplayersStructs.c
	gcc -c nbaplayersStructs.c

run:
	./program

clean:
	rm *.o
	rm program
	rm *~
