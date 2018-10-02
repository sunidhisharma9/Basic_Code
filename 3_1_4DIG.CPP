#include<iostream.h>
#include<conio.h>

 void main()
{ int num,sum=0,digit;
  clrscr();
 cout<<"SUM OF DIGITS OF 4 DIGIT NUMBER"<<endl;
 cout<<"enter number";
 cin>>num;
 while(num!=0)
 { digit=num%10;
   sum=sum+digit;
   num=num/10;
   }
   cout<<"sum  "<<sum;
   getch();
   }


