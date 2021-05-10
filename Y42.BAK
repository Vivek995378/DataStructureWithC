#include<iostream.h>
#include<conio.h>
int gcd(int m,int n)
{
    int r;
    if(m<n)
       return gcd(n,m);
    r=m%n;
    if(r==0)
	return(n);
    else
	return(gcd(n,r));
}
void main()
{
   clrscr();
   cout<<"\n the gcd of 25 and 15 is "<<gcd(25,15);
   getch();
}