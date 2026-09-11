#include<stdio.h>
#include<conio.h>

void main()
{
   char ch;
   clrscr();

   printf("Enter a character:");
   scanf("%c",&ch);

   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||
   ch=='u'||
		 ch=='A'||ch=='E'||ch=='I'||ch=='O'||
   ch=='U')
   {
		printf("character is vowel");
   }
   else
   {
		printf("character is not vowel");
   }

   getch();
}