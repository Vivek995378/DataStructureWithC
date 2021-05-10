#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int arr[20],sz,i,j;
    cout<<"\n enter how many elements you want to enter:- ";
    cin>>sz;
    cout<<"\n enter elements in array:- \n";
    for(i=0;i<sz;i++)
    {
	cin>>arr[i];
    }
    for(i=0;i<sz;i++)
    {
	for(j=i+1;j<sz;j++)
	{
	    if(arr[i]>arr[j])
	    {
	       arr[i]=arr[i]+arr[j];
	       arr[j]=arr[i]-arr[j];
	       arr[i]=arr[i]-arr[j];
	    }
	}
    }
    cout<<"\n the sorted array is:- \n";
    for(i=0;i<sz;i++)
    {
       cout<<arr[i]<<"\n";
    }
    getch();
}


