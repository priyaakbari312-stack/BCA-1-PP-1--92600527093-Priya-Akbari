//wap to print 2,4,6...,20 numbers
#include<stdio.h>
#include<conio.h>

void main()
{
     int i=2;
    clrscr();

    while(i<=20)
    {
       printf("\n %d",i);
       i=i+2;
    }
    getch();
}