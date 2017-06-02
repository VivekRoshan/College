#include<iostream>
using namespace std;
main()
{
int a,b,n,c,i;
cout<<"enter the value of n\n";
cin>>n;
cout<<"enter first two numbers\n";
cin>>a>>b;
cout<<"fibonacci series is\n";
for(i=1;i<=n;i++)
   {
    if(i==1)
      {
       cout<<a<<endl;
      }
    else if(i==2)
      {
       cout<<b<<endl;
      }
    else
      {
       c=a+b;
       cout<<c<<endl;
       a=b;
       b=c;
      }
   }
}

