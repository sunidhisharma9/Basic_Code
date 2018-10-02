//lcm of two numbers
#include<iostream.h>
#include<conio.h>
#include<math.h>

 void main()
{  float n,x,sum=1,i,j,p=1,q,ver;
clrscr();
cout<<"Series question"<<endl;
cout<<"1+ x^2/2!+ x^4/4!+...x^n/n!)";
cout<<endl;
cout<<"enter x and n(even)";
cin>>x>>n;
for(i=2;i<=n;i=i+2)
{     p=1;
for(j=i;j>=1;j--)
{p=p*j; }
q=pow(x,i);
ver=q/p;
sum=sum+ver;
} cout<<sum;
  getch(); }