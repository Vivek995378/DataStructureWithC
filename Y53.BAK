// double linked list.
#include<iostream.h>
#include<conio.h>
#include<malloc.h>
#include<stdio.h>
struct node
{
    int info;
    node *next,*prev;
};
void main()
{
    clrscr();
    node *start,*rear,*ptr;
    int ch;
    start=rear=NULL;
    do
    {
	cout<<"\n 1. Insertion at last";
	cout<<"\n 2. Insertion at first";
	cout<<"\n 3. Deletion at first";
	cout<<"\n 4. Deletion at last";
	cout<<"\n 5. Exit";
	cout<<"\n enter your choice:-";
	cin>>ch;
	switch(ch)
	{
	   case 1:

		       ptr=(node*)malloc(sizeof(node));
		       cout<<"\n enter your value:-";
		       cin>>ptr->info;
		       ptr->next=NULL;
		       if(start==NULL)
		       {
			  start=rear=ptr;
		       }
		       else
		       {
			  rear->next=ptr;
			  ptr->prev=rear;
			  rear=ptr;
		       }
		       cout<<"\n";
		       ptr=start;
		       while(ptr->next!=NULL)
		       {
			  cout<<ptr->info<<"  ";
			  ptr=ptr->next;
		       }
		       while(ptr!=NULL)
		       {
			  cout<<ptr->info<<"  ";
			  ptr=ptr->prev;
		       }
		       getch();
		       break;
	   case 2:
		       ptr=(node*)malloc(sizeof(node));
		       cout<<"\n enter any value:-";
		       cin>>ptr->info;
		       ptr->next=NULL;
		       if(start==NULL)
		       {
			  ptr->next=NULL;
			  start=rear=ptr;
		       }
		       else
		       {
			  ptr->next=start;
			  start->prev=ptr;
			  ptr->prev=NULL;
			  start=ptr;
		       }
		       cout<<"\n";
		       ptr=start;
		       while(ptr->next!=NULL)
		       {
			  cout<<ptr->info<<"  ";
			  ptr=ptr->next;
		       }
		       while(ptr!=NULL)
		       {
			  cout<<ptr->info<<"  ";
			  ptr=ptr->prev;
		       }
		       getch();
		       break;
	   case 3:
		       if(start==NULL)
		       {
			   cout<<"\n Linked List Is Empty";
			   getch();
			   break;
		       }
		       else if(start==rear)
		       {
			   free(start);
			   start=rear=NULL;
		       }
		       else
		       {
			   ptr=start;
			   start=start->next;
			   start->prev=NULL;
			   free(ptr);
		       }
		       cout<<"\n";
		       ptr=start;
		       while(ptr->next!=NULL)
		       {
			    cout<<ptr->info<<"  ";
			    ptr=ptr->next;
		       }
		       while(ptr!=NULL)
		       {
			    cout<<ptr->info<<"  ";
			    ptr=ptr->prev;
		       }
		       getch();
		       break;
	   case 4:
		       if(start==NULL)
		       {
			  cout<<"\n Empty";
			  getch();
			  break;
		       }
		       else if(start==rear)
		       {
			  free(start);
			  start=rear=NULL;
		       }
		       else
		       {
			  ptr=start;
			  while(ptr->next->next!=NULL)
			  {
			      ptr=ptr->next;
			  }
			  ptr->next=NULL;
			  free(rear);
			  rear=ptr;
		       }
		       cout<<"\n";
		       ptr=start;
		       while(ptr->next!=NULL)
		       {
			    cout<<ptr->info<<"  ";
			    ptr=ptr->next;
		       }
		       while(ptr!=NULL)
		       {
			    cout<<ptr->info<<"  ";
			    ptr=ptr->prev;
		       }
		       getch();
		       break;
	   case 5:
		       break;
	   default:
		       cout<<"\n Invalid Choice";
		       getch();
		       break;


	}
    }while(ch!=5);
    getch();
}


