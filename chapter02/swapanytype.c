#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int swapany(void *x, void *y, int size)
{
  void * tmp;
  
  if((tmp = malloc(size)) == NULL)
    return -1;
  
  memcpy(tmp, x, size); 
  memcpy(x, y, size);
  memcpy(y,tmp,size);
  
  free(tmp);
  return 0;
}

int main()
{
  int a = 1;
  int b = 2;
  char c = 'c';
  char d = 'd';
  printf("a: %i\n",a);
  printf("b: %i\n",b);
  swapany(&a,&b,sizeof(int));
  printf("-----\n");
  printf("a: %i\n",a);
  printf("b: %i\n",b);
  printf("=====================\n");
  printf("c: %c\n",c);
  printf("d: %c\n",d);
  swapany(&c,&d,sizeof(char));
  printf("-----\n");
  printf("c: %c\n",c);
  printf("d: %c\n",d);
  return 0;
}