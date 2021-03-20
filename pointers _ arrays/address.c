#include <stdio.h>
int main() 
{
int a[7];
int i;
for(i = 0; i < 7; i++)
{
printf("&a[%d] = %p\n", i, &a[i]);
}
printf("Address of array x is %p", a);
return 0;
}