hellomake: hellomake.c hellofunc.c hellomake.h
	gcc -o helloWorld hellomake.c hellofunc.c -I.

clean: 
	rm helloW*
