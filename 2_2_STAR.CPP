//star pattern
#include<iostream.h>
#include<conio.h>
#include<math.h>

 void main()
{ int i,j,n,k;
clrscr();
cout<<"STAR"<<endl;
cout<<"  *"<<endl<<" ***"<<endl<<"*****"<<endl<<"n lines";
cout<<endl;
cout<<"enter number of lines ";
cin>>n;
for(i=1;i<=n;i++)
{
for(k=i;k<n;k++)
{ cout<<" "; }
for(j=1;j<=2*i-1;j++)
{ cout<<"*"; }
cout<<endl;
}
getch();
}