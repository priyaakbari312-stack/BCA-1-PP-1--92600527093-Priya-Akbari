#include<stdio.h>
#include<conio.h>

void main()
{
   float price,quantity,total,discount,final;
   clrscr();

   printf("Enter Price:");
   scanf("%f",&price);

   printf("Enter Quantity:");
   scanf("%f",&quantity);

   total=price * quantity;

   if(total>1000)
     discount=total*15/100;
   else
     discount=total*10/100;

   final=total-discount;

   printf("\n Total Amount = %.2f",total);
   printf("\n Discount = %.2f",discount);
   printf("\n Final Payment = %.2f",final);

   getch();
}



