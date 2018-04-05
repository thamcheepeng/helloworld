#include <stdio.h>
#include <hello.h>


int main() {
  
  int ret = 100;
  if (ret<0)
  {
 	printHello();
	perror("Today you are unlucky");
	return -1;
  }
  else
  {
	printHello();
  }
  return(0);
}
