#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int arr[10],sz,i,j,k,count=0;
    cout<<"\n enter the size of array:-";
    cin>>sz;
    cout<<"\n enter array:-";
    for(i=0;i<sz;i++)
    {
       cin>>arr[i];
    }
    for(i=0;i<sz;i++)
    {

	for(j=0;j<sz-1-i;j++)
	{
	    if(arr[j]>arr[j+1])
	    {
		arr[j]=arr[j]+arr[j+1];
		arr[j+1]=arr[j]-arr[j+1];
		arr[j]=arr[j]-arr[j+1];
	    }
	    cout<<"\n array after iteration:-"<<++count<<"\n";
	    for(k=0;k<sz;k++)
	    {
		cout<<arr[k]<<"\t";
	    }
	}
    }
    getch();
}










