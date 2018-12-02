#include <stdio.h>
//#include <stdlib.h>

int f()
{
  printf("f()\n"); 
  
  int a[3];
  int * iptr;
  iptr = a;
  for (int i =0; i<3; i++)
  {
    a[i] = i;
    printf("iptr[%i] = %i\n",i,iptr[i]);
  }     
  printf("-----------------\n");  
  
  iptr[0] = 5;
  for (int i =0; i<3; i++) printf("iptr[%i] = %i\n",i,iptr[i]);  
  
  printf("\n");
  return 0;
}

int g()
{
  printf("g()\n"); 
  int a[3];
  int * iptr;
  iptr = a;
  for (int i =0; i<3; i++)
  {
    a[i] = i;
    printf("iptr[%i] = %i\n",i,iptr[i]);
  }     
  printf("-----------------\n"); 
  
  *iptr = 5;
  *(iptr + 1) = 21;
  for (int i =0; i<3; i++) printf("iptr[%i] = %i\n",i,iptr[i]);

  printf("\n");  
  return 0;
}

int main()
{
  f();
  g();
  return 0;
}