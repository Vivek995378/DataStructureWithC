//insert data in linked list in order the data will arrange in ascnding ordr.
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
	cout<<"\n input any value:-";
	cin>>ptr->val;
	ptr->link=NULL;
	if(start==NULL)
	{
	    start=rear=ptr;
	}
	else if( ptr->val <= start->val)
	{

	    ptr->link=start;
	    start=ptr;
	}
	else if( ptr->val >= rear->val)
	{
	    rear->link=ptr;
	    rear=ptr;
	}
	else
	{
	    ptr1=start;
	    while(ptr1->link->val < ptr->val)
	    {
		 ptr1=ptr1->link;
	    }
	    ptr->link=ptr1->link;
	    ptr1->link=ptr;


	}
	ptr=start;
	while(ptr!=NULL)
	{
	    cout<<ptr->val<<"\n";
	    ptr=ptr->link;
	}
	cout<<"\n do you want to continue:-";
	ch=getche();
    }while(ch!='n');
    getch();
}
