#include<iostream.h>
#include<conio.h>
#include<malloc.h>
#include<stdio.h>
struct student
{
    int roll,marks;
    char name[10];
    student *link;
};
void main()
{
    clrscr();
    student *start,*rear,*ptr;
    char ch;
    start=rear=NULL;
    do
    {
	 ptr=(student*)malloc(sizeof(student));
	 cout<<"\n enter name:-";
	 gets(ptr->name);
	 cout<<"\n enter roll:-";
	 cin>>ptr->roll;
	 cout<<"\n enter marks:-";
	 cin>>ptr->marks;
	 ptr->link=NULL;
	 if(start==NULL)
	 {
	       ptr->link=NULL;
	       start=rear=ptr;
	 }
	 else
	 {
	       ptr->link=start;
	       start=ptr;
	 }
	 cout<<"\n do you want to continue:-";
	 ch=getche();
	 cout<<"\n";
    } while(ch=='y'||ch=='Y');
    cout<<"\nlinked list at insertion at first:-\n";
    ptr=start;
    while(ptr!=NULL)
    {
		cout<<"\n name is :-"<<ptr->name;
		cout<<"\n roll is :-"<<ptr->roll;
		cout<<"\n marks is :-"<<ptr->marks;
		ptr=ptr->link;
    }
    getch();
}