#include <stdio.h>
#include <hello.h>


int main() {
  
  int ret = -1;
  if (ret<0)
  {
 	printHello("I are unlucky");
	return -1;
  }
  else
  {
	printHello("I am fantastic");
  }
  return(0);
}
