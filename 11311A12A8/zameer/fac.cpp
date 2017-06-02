#include<iostream>
using namespace std;
main()
{
 int n,i;
 int fac=1;
 cout<<"enter the value\n";
 cin>>n;
 for(i=1;i<=n;i++)
    {
     fac=fac*i;
    }
 cout<<"factorial is"<<fac;
}
