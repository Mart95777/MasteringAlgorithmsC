#include <stdio.h>
#include<time.h>
#include <stdlib.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int g(int ** iptr)
{
  int a =10;
  printf("f initial value: %i\n",**iptr);
  
  if ((*iptr = (int *)malloc(sizeof(int))) == NULL)
      return -1;
  **iptr = a;
  
  printf("f changed value: %i\n",**iptr);
  
  return 0;
}

int main()
{
  int * p = 0;
  int i =7;
  p = &i;
  
  printf("main initial value: %i\n",*p);
  
  int returnValue = g(&p);
  if(returnValue == -1) return returnValue;
  
  delay(100);
  
  printf("main after f value under p: %i\n",*p);
  printf("again value under p: %i\n",*p);
  printf("value of i: %i\n",i);
  
  free(p);
  printf("after free value under p: %i\n",*p);
  
  p = NULL;
  // This cannot be performed, p should be checked not being NULL, uncomment to see
  //printf("after free value under p: %i\n",*p);
  
  return 0;
}