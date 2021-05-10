#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    char name[]="BHARTI";
    char *ptr;
    for(ptr=name;*ptr!=NULL;ptr++)
    {
	cout<<*ptr<<"\n";
    }
    getch();
}