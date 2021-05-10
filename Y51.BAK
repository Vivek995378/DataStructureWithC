#include<iostream.h>
#include<conio.h>
void main()
{
    int arr[5];
    int length=5,i,d,temp;
    for(i=0;i<5;i++)
    {
	cout<<"\n enter any value:-";
	cin>>arr[i];
    }
    d=length;
    do
    {
	d=(d+1)/2;
	for(i=0;i<(length-d);i++)
	{
	   if(arr[i+d]>arr[i])
	   {
	      temp=arr[i+d];
	      arr[i+d]=arr[i];
	      arr[i]=temp;
	   }
	}
    }while(d>1);
    for(i=0;i<5;i++)
    {
	cout<<arr[i];
    }
    getch();
}