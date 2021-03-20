#include<stdio.h>
void main()
{
int a[10],i,b[10];
printf("Enter the elements of the array : \n");
for(i=0;i<=10;i++)
{
scanf("%d",&a[i]);
}
printf("The reverse of the array is :\n");
for(i=10;i>=0;i--)
{
b[i]=a[i];
printf("%d\n",b[i]);
}
}

