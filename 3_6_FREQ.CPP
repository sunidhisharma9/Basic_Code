//frequency of 0-9 in list of 20 numbers
#include<iostream.h>
#include<conio.h>

 void main()
{ int i,j,arr[25],p=0,ctr=0;
  clrscr();
  cout<<"frequency of 0-9 in list of 20 num";
  cout<<endl;
  cout<<"enter numbers";
  for(i=0;i<20;i++)
  { cin>>arr[i]; }
 while(p!=10)
 { ctr=0;
   for(j=0;j<20;j++)
   { if(arr[j]==p)
    { ctr++; } }
    cout<<"frequency of  "<<p<<":"<<ctr<<endl<<endl;
    p++;
 }
 getch();
 }