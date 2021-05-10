#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int a[50],b[50],c[50],i,j,sz,sz1,sz2,k;
    cout<<"\n enter the size of 1st array:-";
    cin>>sz1;
    cout<<"\n the 1st array is:-";
    for(i=0;i<sz1;i++)
    {
	cin>>a[i];
    }
    cout<<"\n enter the size of 2nd array:-";
    cin>>sz2;
    cout<<"\n the 2nd array is:-";
    for(i=0;i<sz2;i++)
    {
       cin>>b[i];
    }

    cout<<"\n the final array is:-\n";
    sz=sz1+sz2;
    i=0;
    j=0;
    k=0;
    while(i<sz1 && j<sz2)
    {
       if(a[i]<b[j])
       {
	   c[k]=a[i];
	   k++;
	   i++;
       }
       else
       {
	   c[k]=b[j];
	   k++;
	   j++;
       }
    }
    while(i<sz1)
    {
       c[k]=a[i];
       k++;
       i++;
    }
    while(j<sz2)
    {
       c[k]=b[j];
       k++;
       j++;
    }
    for(i=0;i<sz;i++)
    {
       cout<<c[i]<<"\n";
    }
    getch();
}