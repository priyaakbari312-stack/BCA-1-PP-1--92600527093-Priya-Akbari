//wap to calculate simple interest
#include<stdio.h>
#include<conio.h>

void main()
{
  float pa,r,y,si;
  clrscr();
  printf("\n enter value of principal amount : ");
  scanf("%f",&pa);

  printf("\n enter value of rate of interest : ");
  scanf("%f",&r);

  printf("\n enter nos of years : ");
  scanf("%f",&y);

  si = (pa*r*y) / 100;
  printf("\n*****************************");
  printf("\n principal amount : %f",pa);
  printf("\n rate of interest : %f",r);
  printf("\n nos of years : %f",y);
  printf("\n*****************************");
  printf("\n simple interest is : %.2f",si);

  getch();

}
