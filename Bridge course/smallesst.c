#include<stdio.h>
void main()
{
int a[100],i,small=a[0],N;
printf("Enter the limit : ");
scanf("%d",&N);
printf("Enter the elements of the array : ");
for(i=0;i<N;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<N;i++)
{
if(small>a[i])
{
small=a[i];
}
}
printf("Smallest element in the array is %d",small);
printf("\n");
}

