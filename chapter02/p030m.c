#include <stdio.h>

int f()
{
  printf("f()\n"); 
  
  int a[3][3];
  int *iptr;
  iptr = &a[0][0];
  for (int i =0; i<3; i++)
  {
    for (int j =0; j<3; j++)
    {
      a[i][j] = i*10+j;
      printf("iptr[%i][%i] = %i\n",i,j,a[i][j]); 
    }
  }     
  printf("-----------------\n");  
  
  *iptr = 5;
  for (int i =0; i<3; i++) 
    for (int j =0; j<3; j++)
      printf("iptr[%i][%i] = %i\n",i,j,a[i][j]);  
  
  printf("\n");
  return 0;
}

int g()
{
  printf("g()\n"); 
  int a[3][3];
  int *iptr;
  iptr = &a[0][0];
  for (int i =0; i<3; i++)
  {
    for (int j =0; j<3; j++)
    {
      a[i][j] = i*10+j;
      printf("iptr[%i][%i] = %i\n",i,j,a[i][j]); 
    }
  }     
  printf("-----------------\n");  
  
  for (int i =0; i<3; i++) 
  {
    for (int j =0; j<3; j++)
    { 
      printf("iptr[%i][%i] = %i\n",i,j,*iptr);
      iptr = iptr +1;      
    }
  }
    
  printf("\n");  
  return 0;
}

int main()
{
  f();
  g();
  return 0;
}