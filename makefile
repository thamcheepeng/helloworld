hellomake: hellomake.c hellofunc.c hellomake.h
	gcc -o output hellomake.c hellofunc.c -I.

clean: 
	rm output*
