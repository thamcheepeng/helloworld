hellomake: hellomake.c hellofunc.c hellomake.h
	gcc -o hello hellomake.c hellofunc.c -I.

clean: 
	rm hello
