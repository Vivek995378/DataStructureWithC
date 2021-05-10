#include<iostream.h>
#include<conio.h>
void deletion(int &front,int &rear)
{
     if(front<0)
     {
	 cout<<"\n underflow";
	 getch();
	 return;
     }
     if(front==rear)
     {
	 front=rear=-1;
     }
     else
     {
	 front++;
     }
}
void main()
{
     clrscr();
     int que[50],i,front=0,rear=-1;
     char ch;
     do
     {
	 rear++;
	 cout<<"\n enter any number:-";
	 cin>>que[rear];
	 cout<<"\n do you want to continue:-";
	 ch=getche();
     }while(ch=='y'||ch=='Y');
     cout<<"\n";
     cout<<"\n array before deletion \n";
     for(i=front;i<=rear;i++)
     {
	cout<<que[i]<<"\t";
     }
     cout<<"\n";
     deletion(front,rear);
     cout<<"\n";
     if(front<0)
     {
	cout<<"\n nothing to delete";
     }
     else
     {
       for(i=front;i<=rear;i++)
       {
       cout<<que[i]<<"\t";
       }
     }
     getch();
}