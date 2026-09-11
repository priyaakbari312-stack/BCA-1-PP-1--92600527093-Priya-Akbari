#include<stdio.h>
#include<conio.h>

void main()
{
	 char ch;
	 clrscr();

	 printf("Enter a character:");
	 scanf("%c",&ch);

	 if(ch >='A'&& ch <='Z')
	 {
		 printf("character is uppercase:");
	 }
	 else if(ch >='a'&& ch <='z')
	 {
		 printf("character is lowercase:");
	 }
	 else
	 {
		 printf("it is not an alphabet");
	 }

	 getch();
}