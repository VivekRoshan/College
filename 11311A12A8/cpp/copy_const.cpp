/*Name: T.vamshidhar		Class: IT F-2		Roll no: 11311A12A0
 				Date: 07-06-12			*/
#include<iostream>
using namespace std;
class code
{
	int id;
   public:
	code(){}
	code(int a)
	{
		id=a;
	}
	code(code &x)
	{
		id=x.id;
	}
	void display()
	{
		cout<<id<<endl;
	}
};

int main()
{
	code A(100);
	code B(A);
	code C=A;
	code D;
	D=A;
	cout<<" ID of A= ";
	A.display();
        cout<<" ID of B= ";
        B.display();
        cout<<" ID of C= ";
        C.display();
        cout<<" ID of D= ";
        D.display();
	return 0;
}

/*OUTPUT
 ID of A= 100
 ID of B= 100
 ID of C= 100
 ID of D= 100
		*/
