app.exe: main.o
	gcc main.o -o app.exe

main.o: main.c main.h
	gcc -c main.c

.PHONY: clean
clean:
	rm app.exe main.o
	rm -rf build/

.PHONY: init
init:
	mkdir build/
	cp test.txt build/
	
.PHONY: full
full:
	make clean
	make init
	make
