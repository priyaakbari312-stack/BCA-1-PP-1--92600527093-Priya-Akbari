#include<iostream.h>
#include<conio.h>

void main()
{
    char ch;
    clrscr();

    cout << "Enter a character:";
    cin>>ch;

    if(ch>='a'&& ch<='z')
    {
       ch = ch + 32;
       cout << "Small letter = "<< ch;
    }
    else if(ch>='a' && ch<='z')
    {
      ch = ch - 32;
      cout << "Capital letter = "<< ch;
    }
    else
      cout<<"Invalid character";

      getch();
}