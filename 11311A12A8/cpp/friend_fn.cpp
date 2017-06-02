/*Name: T.vamshidhar            Class: IT F-2           Roll no: 11311A12A0
 *                                 Date: 07-06-12                  */

#include<iostream>
using namespace std;

class sample
{
	int a;
	int b;
   public:
	void setValue()
	{
		a=25;
		b=33;
	}
	friend float mean(sample s);
};

float mean(sample s)
{
	return float(s.a+s.b)/2.0;
}

int main()
{
	sample x;
	x.setValue();
	cout<<"mean value= "<<mean(x)<<endl;
	return 0;
}

/*OUTPUT
 mean value= 29
		*/
