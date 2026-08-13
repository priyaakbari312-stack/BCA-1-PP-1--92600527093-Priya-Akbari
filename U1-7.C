#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();

	printf("Enter the three numbers seperated by space");
	scanf("%d%d%d",&x,&y,&z);

	if(x>y && x>z)
	{
		printf("%d is max",x);
	}
	else if (y>x && y>z)
	{
		 printf("%d is max",y);
	}
	else
	{
		 printf("%d is max",z);
	}

	getch();
}