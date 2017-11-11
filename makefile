all: main.c
	gcc main.c

clean:
	rm *~
	rm a.out

run: all
	./a.out
