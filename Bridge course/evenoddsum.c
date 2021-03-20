#include<stdio.h>
void main()
{
int i=1,esum=0,osum=0,sum;
while(i<=50)
{
if(i%2==0)
{
esum=esum+i;
}
else
{
osum=osum+1;
}
i++;
}
sum=esum+osum;
printf("sum of even sum and odd sum between 1 and 50 is %d",sum);
printf("\n");
}
