#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int arr[20],x,i,a,sz;

   cout<<"\n enter how many elements you want to enter:-";
   cin>>sz;
   for(i=0;i<sz;i++)
   {
     cout<<"\n enter the value in array:-";
     cin>>arr[i];
   }

   cout<<"\n enter the address where you want to insert value:";
   cin>>x;
   cout<<"\n enter the value to be inserted:-";
   cin>>a;
   for(i=sz;i>x;i--)
   {
     arr[i]=arr[i-1];
   }
   arr[x]=a;
   sz++;
   cout<<"\n the new array is:-";
   for(i=0;i<sz;i++)
   {
     cout<<arr[i];
   }
   getch();
}
