#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i,j,r,c,*ptr;
    r=3;
    c=3;
    ptr=new int[r*c];
    for(i=0;i<3;i++)
    {
       cout<<"\n enter the elements in row "<<i+1<<":- \n";
       for(j=0;j<3;j++)
       {
	  cin>>ptr[i*c+j];
       }
    }
    cout<<"\n the dynamic array is:- \n";
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
	 cout<<ptr[i*c+j]<<"\t";
       }
       cout<<"\n";
    }
    delete []ptr;
    getch();
}