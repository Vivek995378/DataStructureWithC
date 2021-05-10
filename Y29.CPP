#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    char *ptr;
    char *name[]={"mohit","lucky","happy","ronak","rahul"};
    cout<<"\n\n string at position 2:-"<<name[1];
    cout<<"\n\n string at position 4:-"<<name[3];
    ptr=name[1];
    name[1]=name[3];
    name[3]=ptr;
    cout<<"\n\n string at position 2 after swapping:-"<<name[1];
    cout<<"\n\n string at position 4 after swapping:-"<<name[3];
    getch();
}
