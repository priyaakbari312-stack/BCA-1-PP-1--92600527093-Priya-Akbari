//wap that input value from user and find out area of circle
#include<stdio.h>
#include<conio.h>

void main()
{
   float r,area;

   clrscr();

   printf("Enter Radius:");
   scanf("%f",&r);

   area=3.14*r*r;

   printf("Area = %.2f",area);

   getch();
}