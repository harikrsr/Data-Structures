#include<stdio.h>
void main()
{
int i=1,N,esum=0,osum=0;
printf("Enter the limit");
scanf("%d",&N);
do
{
if(i%2==0)
{
esum=esum+i;
}
else
{
osum=osum+i;
}
i++;
}
while(i<=N);
if(esum>osum)
{
printf("even sum is bigger");
}
else 
{
printf("odd sum is bigger");
}
printf("\n");
}



