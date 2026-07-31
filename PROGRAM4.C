//wap  to check if a number it is positive or negative
#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();
	printf("enter an integer: ");
	scanf("%d",&x);

	if(x>0)
	{
		printf("the integer is positive");

	}
	else
	{
		printf("the integer is negetive");

	}
	getch();
}