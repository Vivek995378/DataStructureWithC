#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int a[20],i,sz=-1;
    char ch;
    do
    {
	sz++;
	cout<<"\n enter any number in array :-";
	cin>>a[sz];
	cout<<"\n do you want to continue:-";
	ch=getche();
    }while(ch=='y'||ch=='Y');
    cout<<"\n the array in reverse order is:-";
    for(i=sz;i>=0;i--)
    {
	cout<<a[i]<<"\t";
    }
    getch();
}