// STACK IMPLEMENTATION WITH ARRAY
#include<iostream.h>
#include<conio.h>
void push(int stack[],int &tos,int sz)
{
    if(tos==sz-1)
    {
       cout<<"\n overflow";
       getch();
       return;
    }
    tos++;
    cout<<"\n enter any number:-";
    cin>>stack[tos];
}
void pop(int &tos)
{
   if(tos==-1)
   {
       cout<<"underflow";
       getch();
       return;
   }
   tos--;
}
void main()
{
    clrscr();
    int arr[5],sz=5,tos=-1,i,ch;
    do
    {
	cout<<"\n\n";
	cout<<"\n 1. push";
	cout<<"\n 2. pop";
	cout<<"\n 3. exit";
	cout<<"\n\n enter your choice:-";
	cin>>ch;
	switch(ch)
	{
	  case 1:
		  push(arr,tos,sz);
		  cout<<"\n ";
		  for(i=tos;i>=0;i--)
		  {
		     cout<<arr[i]<<"\t";
		  }
		  getch();
		  break;
	  case 2:
		  pop(tos);
		  if(tos!=-1)
		  {
		    for(i=tos;i>=0;i--)
		    {
		      cout<<arr[i]<<"\t";
		    }
		  }
		  else
		  {
		      cout<<"\n stack is empty";
		  }
		  getch();
		  break;
	  case 3:
		  break;
	  default:
		  cout<<"\n invalid choice:-\n";
		  break;
	}
    }while(ch!=3);
}
