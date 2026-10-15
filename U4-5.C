//wap that print 200,198,196...180
#include<stdio.h>
#include<conio.h>
void main()x
{
    int i,j;
    clrscr();
    for(i=200;i>=180;i--)
    {
       printf("\n %d",i);
    }

    j=200;
      while(j>=180)
    {
       printf("\n %d",j);
       j=j--;
    }

    getch();
}