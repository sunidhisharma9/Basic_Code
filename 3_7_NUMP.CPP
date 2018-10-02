#include<iostream.h>
#include<conio.h>

 void main()
{ int i,j,k,n;
  clrscr();
  cout<<"STAR PATTERN";
  cout<<"enter number of lines(odd)";
  cin>>n;
 for(i=1;i<=n/2+1;i++)
 {  for(j=1;j<=i;j++)
   { cout<<j;  }
   for(j=i-1;j>=1;j--)
   { cout<<j; }   cout<<endl;
 }
 for(i=n/2;i>=1;i--)
 { for(j=1;j<=i;j++)
 { cout<<j; }
   for(j=i-1;j>=1;j--)
   { cout<<j; }
   cout<<endl; }

   getch();
   }