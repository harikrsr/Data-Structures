#include<stdio.h>
void main()
{
int l,b,rect;
float r,area,perimeter;
printf("Enter the length and breadth:");
scanf("%d%d",&l,&b);
rect=l*b;
printf("\nArea of rectangle is %d",rect);
printf("\nEnter the radius:\n");
scanf("%f",&r);
area=3.14*r*r;
printf("\nArea of circle is %f",area);
perimeter=2*3.14*r;
printf("\nPerimeter of circle is %f ",perimeter);
}
