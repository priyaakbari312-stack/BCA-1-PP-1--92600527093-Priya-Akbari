//wap to find the area of a circle
#include<stdio.h>
#include<conio.h>

void main()
{
	float a,r;
	printf("enter the redius of the circle: ");
	scanf("%f,&r);

	a=3.14*r*r;
	printf("the area of circle is: %2f",a);
	getch();
}
