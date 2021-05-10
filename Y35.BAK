// program to insert a new node at a given position.
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
    node *start,*rear,*ptr,*ptr1;
    int pos;
    char ch;
    start=rear=NULL;
    do
    {
	ptr=(node*)malloc(sizeof(node));
	cout<<"\n enter any value:-";
	cin>>ptr->val;
	ptr->link=NULL;
	if(start==NULL)
	{
	    start=rear=ptr;
	}
	else
	{
	    rear->link=ptr;
	    rear=ptr;
	}
	cout<<"\n do you want to continue:-";
	ch=getche();
    }while(ch!='n');
    cout<<"\n enter the position you want to enter any node:";
    cin>>pos;
    ptr1=(node*)malloc(sizeof(node));
    cout<<"enter any value ";
    cin>>ptr1->val;
    ptr=start;
    for(int i=2;i<pos;i++)
    {
       ptr=ptr->link;
    }
    ptr1->link=ptr->link;
    ptr->link=ptr1;
    cout<<"\n final linked list is:-";
    ptr=start;
    while(ptr!=NULL)
    {
	 cout<<ptr->val<<"\n";
	 ptr=ptr->link;
    }
    getch();
}

