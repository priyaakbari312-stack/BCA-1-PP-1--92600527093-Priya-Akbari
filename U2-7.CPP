#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    clrscr();

    printf("Enter a number:");
    scanf("%d",&n);

    printf("Square = %d\n",n*n);
    printf("Cube = %d", n*n*n);

    getch();
}