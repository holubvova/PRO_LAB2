.PHONY: greet build rebuild run clean 
%.o:%.c
greet:
	@echo "	   Terminating make - please specify target explicitly"
	@echo "    build   : fast rebuild / build"
	@echo "    rebuild : full rebuild"
	@echo "    run     : run after fast rebuild / build"
	@echo "    clean   : perform full clean"
	
build: lab
rebuild: clean lab
run: build
	./lab -r 6 7
clean:
	rm -rvf *.o lab

lab: main.o Sort.o  Input.o Output.o release.o debug.o
	gcc -o lab main.o Sort.o debug.o release.o Input.o Output.o

main.o:	main.c Sort.h Array.h Input.h Output.h Struk.h release.h debug.h
	gcc -c -o main.o main.c

Sort.o:	Sort.c Sort.h Array.h
	gcc -c -o Sort.o Sort.c

Input.o:Input.c Input.h Array.h
	gcc -c -o Input.o Input.c 

Output.o:Output.c Output.h Array.h
	gcc -c -o Output.o Output.c

release.o:release.c release.h Array.h Input.h Output.h Sort.h
	gcc -c -o release.o release.c

debug.o:debug.c debug.h Array.h Input.h Output.h Sort.h
	gcc  -c -o debug.o debug.c

