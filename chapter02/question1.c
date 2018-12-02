#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

int main()
{
  
  int * iptr = (int*)10;
  printf("pointer 10 value: %p\n",iptr);
  printf("pointer 10 address: %p\n",(void *) &iptr);
  
  // Compilation error, uncomment
  //int * iptr = 10;
  
  
  //printf("pointer: %i\n",iptr);
  return 0;
}