//insertion in queue
#include<iostream.h>
#include<conio.h>
void insert(int queue[],int &front,int &rear,int sz)
{
   if(rear==sz-1)
   {
       cout<<"overflow";
       getch();
       return;
   }
   if(front<0)
   {
       front=rear=0;
   }
   else
   {
       rear++;
   }
   cout<<"\n enter any number:-";
   cin>>queue[rear];
}
void main()
{
   clrscr();
   int i,front=-1,rear=-1,arr[50],sz=50;
   char ch;
   do
   {
       insert(arr,front,rear,sz);
       cout<<"\n do you want to continue:-";
       ch=getche();
   }while(ch!='n');
   cout<<"\n\n";
   for(i=front;i<=rear;i++)
   {
       cout<<arr[i]<<"\n";
   }
   getch();
}