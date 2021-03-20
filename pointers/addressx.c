#include <stdio.h>
int main()
{
  int x = 10;
  int * p =&x;
  printf("The value of x is: %d\n", x);
  printf("address of x: %p", &x); 
  printf("p:%p",p); 
  return 0;
}