#include <stdio.h>
//#include<time.h>

int factorial(int n)
{
  if(n<0)
  {
    printf("Not defined!\n");
    return 0;
  }    
  if(n>1) 
    return n * factorial(n-1);
  else
    return 1;
}

int main()
{
  int n = -1;
  printf("Factorial n = ");
  char endl = '\n';
  int count = scanf("%d%c", &n, &endl);
  printf("n is: %i\n",n);
  printf("Factorial is: %i\n",factorial(n));
  return 0;
}