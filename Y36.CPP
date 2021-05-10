//program to insert data at begining , end and in middle in linked list.
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
    cout<<"\n";
    ptr1=(node*)malloc(sizeof(node));
    cout<<"\n enter the value in new node:-";
    cin>>ptr1->val;
    if(ptr1->val <= start->val)
    {
	ptr1->link=start;
	start=ptr1;
    }
    else if(ptr1->val >= rear->val)
    {
	rear->link=ptr1;
	rear=ptr1;
    }
    else
    {
     ptr=start;
     while(ptr->link->val< ptr1->val)
     {
	ptr=ptr->link;
     }
     ptr1->link = ptr->link;
     ptr->link=ptr1;
    }
    cout<<"\n linked list in ascending order:-\n";
    ptr=start;
    while(ptr!=NULL)
    {
	cout<<ptr->val<<"\n";
	ptr=ptr->link;
    }
    getch();
}