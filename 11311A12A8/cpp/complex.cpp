/*complex numbers program*/
#include<iostream>
using namespace std;
class complex
{
float realpart;
float imagpart;
public:
complex()
{
realpart=0;
imagpart=0;
}
complex(float r,float i)
{
realpart=r;
imagpart=i;
}
void read();
void write();
void add(complex c1);
void add(complex a,complex b);
friend complex sum(complex c1,complex c2);
complex operator +(complex c);
};
void complex::add(complex c)
{
realpart+=c.realpart;
imagpart+=c.imagpart;
}
void complex::add(complex c1,complex c2)
{
realpart=c1.realpart+c2.realpart;
imagpart=c1.imagpart+c2.imagpart;
}
complex sum(complex c1,complex c2)
{
complex c;
c.realpart=c1.realpart+c2.realpart;
c.imagpart=c1.imagpart+c2.imagpart;
return c;
}
complex complex::operator+(complex c)
{
complex a;
a.realpart=this->realpart+c.realpart;
a.imagpart=this->imagpart+c.realpart;
return a;
}

void complex::read()
{
cout<<"enter the realpart"<<endl;
cin>>realpart;
cout<<"enter the imaginary part"<<endl;
cin>>imagpart;
}

void complex::write()
{
cout<<"the complex number is"<<realpart<<"+"<<"i"<<imagpart<<endl;
}


int main()
{
complex s,s1,s2,s3,c;
s1=complex(5.0,3.0);
s2=complex(5.0,5.0);
s3=s1+s2; //uses the concept of the overloading
s.add(s1,s2);//uses the first add function with 2 ar
c=sum(s1,s2);//using the friend function
s3.write();
s.write();
c.write();
s1.add(s2);//using the add function with 1 arguments
s1.write();
return 0;
}

/*
[11311A12A8@itlab cpp]$ g++ complex.cpp
[11311A12A8@itlab cpp]$ ./a.out
the complex number is10+i8
the complex number is10+i8
the complex number is10+i8
the complex number is10+i8
*/
