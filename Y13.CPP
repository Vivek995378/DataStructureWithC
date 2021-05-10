#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int a[10],i,x,val,sz;
    cout<<"\n enter the size of array:-";
    cin>>sz;
    cout<<"\n the array is:-";
    for(i=0;i<sz;i++)
    {
       cin>>a[i];
    }
    cout<<"\n enter the value to be deleted:-";
    cin>>val;
    cout<<"\n the final array is:-";
    for(i=0;i<sz;i++)
    {
	 if(val==a[i])
	 {
	     x=i;
	     break;
	 }
    }
    for(i=x;i<sz;i++)
    {
	a[i]=a[i+1];
    }
    sz--;
    for(i=0;i<sz;i++)
    {
	cout<<a[i]<<"\n";
    }
    getch();
}
