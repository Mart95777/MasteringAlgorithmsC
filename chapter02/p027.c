#include <stdio.h>
#include<time.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int f(int ** iptr)
{
  printf("f initial value: %i\n",**iptr);
  int a =10;
  *iptr = &a;
  printf("f changed value: %i\n",**iptr);
  
  return 0;
}

int main()
{
  int * p = 0;
  int i =7;
  p = &i;
  
  printf("main initial value: %i\n",*p);
  
  f(&p);
  
  // comment out, to see what the first printf shows.
  delay(100);
  
  printf("main after f value under p: %i\n",*p);
  printf("again value under p: %i\n",*p);
  printf("value of i: %i\n",i);
  
  return 0;
}