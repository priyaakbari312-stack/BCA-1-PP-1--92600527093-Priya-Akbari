//wap to calculate simple interest
#include<stdio.h>
#include<conio.h>

void main()
{
	 float p,t,r,i,si;
	 clrscr();

	 printf("enter the principle amount:");
	 scanf("%d",&p);

	 printf("enter the rate of interest: ");
	 scanf("%d",&r);

	 printf("enter the time period: ");
	 scanf("%d",&t);

	 i=(p*r*t)/100;

	 printf("the simple interest is: %f",i);
	 getch();
}