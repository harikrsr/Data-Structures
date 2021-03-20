#include <stdio.h>
#include <stdlib.h>
int main()
{
int *p, i , x1, x2;
    printf("Enter size: ");
    scanf("%d", &x1);
    ptr = (int*) malloc(x1 * sizeof(int));
    printf("Addresses of previously allocated memory: ");
    for(i = 0; i < x1; i++)
    printf("%u\n",p + i);
    printf("\nEnter the new size: ");
    scanf("%d", &x2);
    ptr = realloc(p, x2 * sizeof(int));
    printf("Addresses of newly allocated memory: ");
    for(i = 0; i < x2; i++)
    printf("%u\n", p + i);
    free(p);
    return 0;
}