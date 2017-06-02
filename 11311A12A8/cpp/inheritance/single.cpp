/*S.Vivek Roshan                                    Roll:11311A12A8
 * Class:IT  F2                                     Date:7/06/2012*/
#include<iostream>

using namespace std;

class B
{
	int a;
   public:
	int b;
	void getdata();
	int get_a();
	void show_a();
};

class D:public B
{
	int c;
   public:
	void multi();
	void display();
};

void B::getdata()
{
	a=5;
	b=10;
}

int B::get_a()
{
	return a;
}

void B::show_a()
{
	cout<<"a= "<<a<<endl;
}

void  D::multi()
{
	c=b*get_a();
}

void D::display()
{
	cout<<"a= "<<get_a()<<endl;
	cout<<"b= "<<b<<endl;
	cout<<"c= "<<c<<endl;
}

int main()
{
	D d;
	d.getdata();
	d.multi();
	d.show_a();
	d.display();
	d.b=20;
	return 0;
}


/*
[11311A12A8@itlab inheritance]$ g++ single.cpp
[11311A12A8@itlab inheritance]$ ./a.out
a= 5
a= 5
b= 10
c= 50
*/
