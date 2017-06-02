/*Name:S.Vivek Roshan                         Class:IT F2
Roll:11311A12A8                               Date:10/5/12*/
#include<iostream>
#define PI 3.14
using namespace std;

class Circle
{
	float radius;
  public:
	void getRadius(float r);
	void getRadius();
	float diameter();
	float area();
	float circumference();
};

void Circle::getRadius(float r)
{
	radius=r;
}

void Circle::getRadius()
{
	float r;
	cout<<"enter radius of 2nd circle: ";
	cin>>r;
	radius=r;
}

float Circle::diameter()
{
	return(2*radius);
}

float Circle::area()
{
	return(PI*radius*radius);
}

float Circle::circumference()
{
	return(2*PI*radius);
}

int main()
{
	Circle c1,c2;
	float r;
	cout<<"enter radius of 1st circle: ";
	cin>>r;
	c1.getRadius(r);
	c2.getRadius();
	cout<<"area,diameter,circumference of c1 circle are:";
	cout<<c1.area()<<"\t"<<c1.diameter()<<"\t"<<c1.circumference()<<endl;
        cout<<"area,diameter,circumference of c2 circle are:";
        cout<<c2.area()<<"\t"<<c2.diameter()<<"\t"<<c2.circumference()<<endl;
	return 0;
}

/*OUTPUT:
 ** [11311A12A8@itlab cpp]$ g++ circle.cpp
 ** [11311A12A8@itlab cpp]$ ./a.out
 ** enter radius of 1st circle: 3
 ** enter radius: 5
 ** area,diameter,circumference of c1 circle are:28.26      6       18.84
 ** area,diameter,circumference of c2 circle are:78.5       10      31.4
 **/

