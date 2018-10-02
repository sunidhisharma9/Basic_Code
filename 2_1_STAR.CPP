//star pattern
#include<iostream.h>
#include<conio.h>
#include<math.h>

 void main()
{ int i,j,n;
clrscr();
cout<<"STAR"<<endl;
cout<<"*"<<endl<<"**"<<endl<<"***"<<endl<<"n lines";
cout<<endl;
cout<<"enter number of lines ";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=1;j<i;j++)
{ cout<<"*"; }
cout<<endl;
}
getch();
}