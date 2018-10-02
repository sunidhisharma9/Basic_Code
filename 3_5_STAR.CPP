#include<iostream.h>
#include<conio.h>

 void main()
{ int i,j,k,n;
  clrscr();
  cout<<"STAR PATTERN";
  cout<<"enter number of lines(odd)";
  cin>>n;
  for(i=1;i<=n/2+1;i++)
  {
   for(k=1;k<=i;k++)
   { cout<<"*"; }
   cout<<endl;
   }
   for(j=n/2;j>=1;j--)
   { for(k=1;k<=j;k++)
   { cout<<"*";}
   cout<<endl; }
   getch();
   }