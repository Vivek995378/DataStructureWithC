#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int arr[50],i,a,x,sz;
    cout<<"\n enter the size of array:-";
    cin>>sz;
    for(i=0;i<sz;i++)
    {
      cout<<"\n enter array element:-";
      cin>>arr[i];
    }
    cout<<"\n the existing array is:-";
    for(i=0;i<sz;i++)
    {
       cout<<arr[i];
    }
    cout<<"\n enter the value to be inserted:-";
    cin>>a;
    for(i=0;i<sz;i++)
    {
	if(a<arr[i])
	{
	    x=i;
	    break;
	}
    }
    for(i=sz+1;i>=x;i--)
    {
       arr[i]=arr[i-1];
    }
    arr[x]=a;
    sz++;
    cout<<"\n the array in ascending order after insertion is:-";
    for(i=0;i<sz;i++)
    {
      cout<<arr[i];
    }
    getch();
}