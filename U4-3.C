//wap to print 100 to 90 numbers
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j;
    clrscr();
    for(i=100;i>=90;i--)
    {
       printf("\n %d",i);
    }

    j=100;
      while(j>=90)
    {
       printf("\n %d",j);
       j=j--;
    }

    getch();
}




