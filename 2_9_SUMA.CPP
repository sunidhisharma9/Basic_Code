#include<iostream.h>
#include<conio.h>

 void main()
{ float i,sum=0,n,num;
 clrscr();
 cout<<"print sum & avg";
cout<<endl;
 cout<<"how many integers do you wish to enter?";
 cin>>n;
 cout<<"enter integers";
 for(i=0;i<n;i++)
 { cin>>num;
  sum+=num;

   }
cout<<"sum is  "<<sum<<'\n'<<"avg is  "<<sum/n;
getch();
}