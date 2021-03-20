#include<stdio.h>
void main()
{
int i,esum=0,osum=0,sum;
for(i=1;i<=50;i++)
{
if(i%2==0)
{
esum=esum+i;
}
else
{
osum=osum+1;
}
}
sum=esum+osum;
printf("sum of even sum and odd sum between 1 and 50 is %d",sum);
printf("\n");
}
