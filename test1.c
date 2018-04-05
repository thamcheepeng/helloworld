#include <stdio.h>
#include <stdlib.h>
#include <hello.h>


int main() {
  
  int ret = -1;
  if (ret<0)
  {
 	printHello("I are unlucky");
	exit(1);
  }
  else
  {
	printHello("I am fantastic");
	exit(0);
  }
  
}
