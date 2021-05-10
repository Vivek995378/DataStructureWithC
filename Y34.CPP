// queue implementation with the help of linked list .
//insertion at last and deletion at first.
#include<iostream.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int val;
    node *link;
};
void main()
{
    clrscr();
    node *front,*rear,*ptr;
    int ch;
    front=rear=NULL;
    do
    {
	cout<<"\n 1. insertion at last in dynamic queue ";
	cout<<"\n 2. deletion from first in dynamic queue ";
	cout<<"\n 3. exit";
	cout<<"\n enter your choice:-";
	cin>>ch;
	switch(ch)
	{
	    case 1:
		    ptr=(node*)malloc(sizeof(node));
		    cout<<"\n enter any value:-";
		    cin>>ptr->val;

		    ptr->link=NULL;
		    if(front==NULL)
		    {
			front=rear=ptr;
		    }
		    else
		    {
			rear->link=ptr;
			rear=ptr;
		    }
		    cout<<"\n insert at last in dynamic queue \n";
		    ptr=front;
		    while(ptr!=NULL)
		    {
			cout<<ptr->val<<"\t";
			ptr=ptr->link;
		    }
		    getch();
		    break;
	    case 2:
		    if(front==NULL)
		    {
			cout<<"\n empty";
			getch();
			break;
		    }
		    else if(front==rear)
		    {
			free(front);
			front=rear=NULL;
		    }
		    else
		    {
			ptr=front;
			front=front->link;
			free(ptr);
		    }
		    cout<<"\n deletion from dynamic queue \n";
		    ptr=front;
		    while(ptr!=NULL)
		    {
		       cout<<ptr->val<<"\n";
		       ptr=ptr->link;
		    }
		    getch();
		    break;
	    case 3:
		    break;
	    default:
		    cout<<"\n invalid choice";
		    break;
	}
    }while(ch!=3);
}