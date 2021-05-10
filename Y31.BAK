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
    rear=start=NULL;
    do
    {
	 ptr=(student*)malloc(sizeof(student));
	 cout<<"\n enter name:- \n";
	 gets(ptr->name);
	 cout<<"\n enter roll no:- \n";
	 cin>>ptr->roll;
	 cout<<"\n enter marks:- \n";
	 cin>>ptr->marks;
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
	 cout<<"\n";
    }while(ch=='y'||ch=='Y');
    cout<<"\n the linked list is:- \n";
    ptr=start;
    while(ptr!=NULL)
    {
	cout<<"\n name:- "<<ptr->name;
	cout<<"\n roll no:- "<<ptr->roll;
	cout<<"\n marks:- "<<ptr->marks;
	ptr=ptr->link;
    }
    getch();
}
