#include<stdio.h>
#include<conio.h>

void main()
{
     int year;
     clrscr();

     printf("Enter Year:");
     scanf("%d",&year);

     if(year%4==0)
	printf("Year is Leap Year");
     else
	printf("Year is not a Leap Year");

     getch();

}