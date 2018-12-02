#include <stdio.h>

void swap1(int x, int y)
{
  int tmp;
  tmp = x; x = y; y = tmp;
}

void swap2(int *x, int *y)
{
  int tmp;
  tmp = *x; *x = *y; *y = tmp;
}

int main()
{
  int a = 1;
  int b = 2;
  int c = 5;
  int d = 7;
  printf("a: %i\n",a);
  printf("b: %i\n",b);
  swap1(a,b);
  printf("-----\n");
  printf("a: %i\n",a);
  printf("b: %i\n",b);
  printf("=====================\n");
  printf("c: %i\n",c);
  printf("d: %i\n",d);
  swap2(&c,&d);
  printf("-----\n");
  printf("c: %i\n",c);
  printf("d: %i\n",d);
  return 0;
}