#include<iostream.h>
#include<conio.h>
int bsearch(int arr[],int sz,int val);
void main()
{
    clrscr();
    int arr[10],i,sz,item,chk;
    cout<<"\n enter size:-";
    cin>>sz;
    cout<<"\n enter an array:-\n";
    for(i=0;i<sz;i++)
    {
       cin>>arr[i];
    }
    cout<<"\n enter the element to be searched for:-";
    cin>>item;
    chk=bsearch(arr,sz,item);
    if(chk==-1)
    {
       cout<<"\n value not found";
    }
    else
    {
       cout<<"\n value found at index:-"<<chk;
       cout<<"\n value found at position:-"<<chk+1;
    }
    getch();
}
int bsearch(int arr[],int sz,int val)
{
   int beg=0,last=sz-1,mid;
   while(beg<=last)
   {
     mid=(beg+last)/2;
     if(val==arr[mid])
     {
       return mid;
     }
     else if(val>arr[mid])
     {
      beg=mid+1;
     }
     else
     {
      last=mid-1;
     }
   }
   return -1;
}

