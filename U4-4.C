//wap that print 1,3,5,7...,n
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n=10,j;
    clrscr();

    for(i=1;i<=n;i++)
    {
       printf("\n %d",i);
    }

    j=1;
      while(j<=n)
    {
       printf("\n %d",j);
       j++;
    }

    getch();
}

