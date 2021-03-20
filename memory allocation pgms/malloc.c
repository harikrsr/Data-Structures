#include<stdio.h>
int main()
{
    int *ptr, i , n, sum=0;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    if(ptr==NULL)
    {
    printf("Sorry inable to allocate memory");
    exit(0);
    }
   printf("Enter the elements: ");
    for(i = 0; i < n; i++)
     {
         scanf("%d",ptr+i);
         sum+=*(ptr+i);
     }
    printf("Sum=%d",sum);
    free(ptr);
    return 0;
}