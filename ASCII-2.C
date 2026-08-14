//wap which takes input of one character and displays ASCII code
#include<stdio.h>
#include<conio.h>

void main()
{
	char x,y;
	clrscr();
	printf("\n Enter the character in upper case : ");
	scanf("%c",&x);

	printf("\n the ASCII value is : %d",x);
	y=x+32;
	printf("\n the ASCII value of lower case is : %d",y);
	getch();
}