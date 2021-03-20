#include<stdio.h>
void main()
{
char ch;
printf("Enter a letter in VIBGYOR : ");
scanf("%c",&ch);
if(ch=='V'||ch=='v')
{
printf("violet");
}
else if(ch=='I'||ch=='i')
{
printf("indigo");
}
else if(ch=='B'||ch=='b')
{
printf("Blue");
}
else if(ch=='G'||ch=='g')
{
printf("Green");
}
else if(ch=='Y'||ch=='y')
{
printf("Yellow");
}
else if(ch=='O'||ch=='o')
{
printf("orange");
}
else if(ch=='R'||ch=='r')
{
printf("Red");
}
else
{
printf("wrong choice");
}
}
