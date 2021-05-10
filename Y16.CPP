#include<iostream.h>
#include<conio.h>
void pop(int &tos)
{
   if(tos==-1)
   {
       cout<<"\n underflow";
       getch();
       return;
   }
   tos--;

}
void main()
{
    clrscr();
    int s[50],i,tos=-1;
    char ch;
    do
    {   tos++;
	cout<<"\n enter any number:-";
	cin>>s[tos];

	cout<<"\n do you want to continue:-";
	ch=getche();
    }while(ch!='n');
    cout<<"\n";
    for(i=tos;i>=0;i--)
    {
	cout<<s[i]<<"\t";
    }
    pop(tos);
    cout<<"array after using pop operation"<<"\n";
    for(i=tos;i>=0;i--)
    {
	 cout<<s[i]<<"\t";
    }
    getch();
}