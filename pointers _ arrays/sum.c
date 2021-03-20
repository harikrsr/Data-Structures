#include <stdio.h>
int main() 
{
int i, x[10], sum = 0;
printf("Enter the elements of the array: ");
for(i = 0; i < 10; i++)
{
scanf("%d", x+i);
sum += *(x+i);
}
printf("Sum = %d", sum);
return 0;
}