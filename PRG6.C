//wap to input your percentage and dsisplay your result is pass or fail
#include<stdio.h>
#include<conio.h>

void main()
{
	float x;
	clrscr();
	printf("enter your percentage: ");
	scanf("%f",&x);

	if(x>=35)
	{
		printf("\n pass");
	}
	else
	{
		printf("\n fail");
	}
	getch();
}
