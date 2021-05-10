#include<iostream.h>
#include<conio.h>
void main()
{
    int arr[5];
    int length=5,i,j,temp;
    for(i=0;i<5;i++)
    {
	cout<<"\n enter a number:-";
	cin>>arr[i];
    }
    for(i=0;i<(length-1);i++)
    {
	for(j=(i+1);j<length;j++)
	{
	    if(arr[i]<arr[j])
	    {
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	    }
	}
    }
    cout<<"\n sorted array is:-";
    for(i=0;i<5;i++)
    {
      cout<<arr[i];
    }
    getch();
}
