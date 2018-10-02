//star pattern
#include<iostream.h>
#include<conio.h>
#include<math.h>

 void main()
{ int i,j,n,k;
clrscr();
cout<<"number pattern"<<endl;
cout<<"  1"<<endl<<" 121"<<endl<<"12321"<<endl<<"n lines";
cout<<endl;
cout<<"enter number of lines ";
cin>>n;
for(i=1;i<=n;i++)
{
for(k=i;k<n;k++)
{ cout<<" "; }
for(j=1;j<=i;j++)
{ cout<<j; }
for(j=i-1;j>1;j--)
{ cout<<j; }
cout<<endl;
}
getch();
}