#include <stdio.h>
#include <stdlib.h>
#include <hello.h>


int main() {
  
  int ret = 0;
  if (ret<0)
  {
 	printHello("I are unlucky");
	return(-1);
	exit(1);
  }
  else
  {
	printHello("I am fantastic");
	return(0);
  }
	
  exit(0);
}
