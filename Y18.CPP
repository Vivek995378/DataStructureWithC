// stack implementation with the help of array.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{
     char n[50];
     int roll;
};
void push(student stack[],int &tos,int sz)
{
     if(tos==sz-1)
     {
	 cout<<"overflow";
	 getch();
	 return;
     }
     tos++;
     cout<<"\n enter name:-";
     gets(stack[tos].n);
     cout<<"\n enter roll number:-";
     cin>>stack[tos].roll;

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
     struct student s[50];
     int sz=50,i,tos=-1,ch;
     do
     {
	 cout<<"\n\n";
	 cout<<"\n 1. push";
	 cout<<"\n 2.pop";
	 cout<<"\n 3. exit";
	 cout<<"\n enter your choice";
	 cin>>ch;
	 switch(ch)
	 {
	    case 1:
		    push(s,tos,sz);
		    cout<<"\n\n";
		    for(i=tos;i>=0;i--)
		    {
			cout<<s[i].n<<"\t";
			cout<<s[i].roll<<"\n";
		    }
		    getch();
		    break;
	    case 2:
		    pop(tos);
		    if(tos!=-1)
		    {
			for(i=tos;i>=0;i--)
			{
			   cout<<s[i].n<<"\t";
			   cout<<s[i].roll<<"\n";
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
		    cout<<"invalid choice";
		    break;
	 }
     }while(ch!=3);
}
