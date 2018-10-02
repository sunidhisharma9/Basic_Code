
#include<iostream.h>
#include<conio.h>

 void main()
{ int i,j,arr[25],e=0,o=0,n,num;
  clrscr();
  cout<<"EVEN & ODD COUNT";
  cout<<"how many numbers do you wish to enter";
  cin>>n;
  cout<<endl;
  cout<<"enter numbers";
  for(i=0;i<n;i++)
  { cin>>num;
  if(num%2==0)
  { e++; }
  else
  { o++; }
 }  cout<<"even numbers"<<e;
 cout<<endl<<"odd numbers"<<o;
 getch();
 }