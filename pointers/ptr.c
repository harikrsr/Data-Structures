#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5};
int * ptr;
ptr=&a[3];
printf("%d",*ptr);
printf("address:%p",ptr);
return 0;
}