//wap which takes input of one character and displays ASCII code
#include<stdio.h>
#include<conio.h>

void main()
{
	char x;
	clrscr();
	printf("\n Enter any character : ");
	scanf("%c",&x);

	printf("\n Input character is : %c",x+1);
	printf("\n ASCII code is : %d",x);
	getch();
}