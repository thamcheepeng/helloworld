hello: hello_top.c hello.c hello.h
	gcc -o helloWorld hello_top.c hello.c -I.

test0: test0.c hello.c hello.h 
	gcc -o test_0 test0.c hello.c -I.

test1: test1.c hello.c hello.h 
	gcc -o test_1 test1.c hello.c -I.

clean: 
	rm helloW* test_*
