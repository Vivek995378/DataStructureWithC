#include<iostream.h>
#include<conio.h>
void disp(int arr[],int sz)
{

    for(int i=0;i<=sz;i++)
    {
    cout<<arr[i]<<"\t";
    }
}
void insert(int arr[],int &sz,int val)
{
    if(sz<0 || val>=arr[sz])
    {
       sz++;
       arr[sz]=val;
    }
    else
    {
      int pos=0;
      for(int i=0;i<sz;i++)
      {
       if(val<arr[i])
       {
	  pos=i;
	  break;
       }
      }
      for(i=sz+1;i>=pos;i--)
      {
	arr[i]=arr[i-1];
      }

    arr[pos]=val;
    sz++;
    }

}

void main()
{
   clrscr();
   int n[20],i,pos,val,sz=-1;
   char ch;
   do
   {

    cout<<"\n enter any number:-";
    cin>>val;
    insert(n,sz,val);
    cout<<"\n the array is:-";
    disp(n,sz);
    cout<<"\n do you want to continue:-";
    ch=getche();
   }while(ch!='n');

   getch();
}