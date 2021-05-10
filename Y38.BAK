//merging 2 linked list in order the resultant l.l. is in ascending order.
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
    node *start,*rear,*ptr;
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
       cout<<"\n do you want to continue:- \n";
       ch=getche();
    }while(ch!='n');
    node *start1,*rear1,*ptr1;
    start1=rear1=NULL;
    do
    {
	ptr1=(node*)malloc(sizeof(node));
	cout<<"\n enter value in 2nd linked list:- ";
	cin>>ptr1->val;
	ptr1->link=NULL;
	if(start1==NULL)
	{
	    start1=rear1=ptr1;
	}
	else
	{
	    rear1->link=ptr1;
	    rear1=ptr1;
	}
	cout<<"\n do you want to continue :- \n";
	ch=getche();
    }while(ch!='n');
    ptr=start;
    ptr1=start1;
    node *start2,*rear2,*ptr2;
    start2=rear2=NULL;
    ptr2=(node*)malloc(sizeof(node));
    ptr2->link=NULL;
    cout<<"\n merged linked list is:- \n";
    while(ptr!=NULL  &&  ptr1!=NULL)
    {
	 if(ptr->val <= ptr1->val)
	 {
	     ptr2=ptr;
	     ptr=ptr->link;
	 }
	 else
	 {
	     ptr2=ptr1;
	     ptr1=ptr1->link;
	 }
	 if(ptr->val <= ptr1->val)
	 {
	    start=start->link;
	    if(start2==NULL)
	    {
		ptr2->link=NULL;
		start2=rear2=ptr2;
	    }
	    else
	    {
		rear2->link=ptr2;
		rear2=ptr2;
	    }
	 }
	 else
	 {
	   start1=start1->link;
	   if(start2==NULL)
	   {
	       ptr2->link=NULL;
	       start2=rear2=ptr2;
	   }
	   else
	   {
	       rear2->link=ptr2;
	       rear2=ptr2;
	   }
	 }
    }
    start=rear=start1=rear1=NULL;
    if(ptr!=NULL)
    {
       rear2->link=ptr;
       rear2=rear;
    }
    else
    {
       rear2->link=ptr1;
       rear2=rear1;
    }
    ptr2=start2;
    while(ptr2!=NULL)
    {
	cout<<ptr2->val<<"\n";
	ptr2=ptr2->link;
    }

    getch();
}

