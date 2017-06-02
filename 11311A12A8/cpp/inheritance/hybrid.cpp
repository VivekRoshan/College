/* Name: S.Vivek Roshan	                               Class:IT F2
 * Roll:11311a12A8                                     Date:07/06/2012*/
#include<iostream>

using namespace std;

class student
{
   protected:
        int roll_no;
   public:
        void get_no(int);
        void put_no();
};

void student::get_no(int a)
{
        roll_no=a;
}

void student::put_no()
{
        cout<<"\n rollno= "<<roll_no<<"\n";
}

class test:public student
{
   protected:
        float sub1;
        float sub2;
   public:
        void get_marks();
        void put_marks();
};

void test::get_marks()
{
        cout<<"\nEnter marks of sub1: "<<endl;
        cin>>sub1;
        cout<<"\nEnter marks of sub2: "<<endl;
        cin>>sub2;
}

void test::put_marks()
{
        cout<<"\n marks in sub1= "<<sub1<<endl;
        cout<<"\n marks in sub2= "<<sub2<<endl;
}


class sports
{
   protected:
        float score;
   public:
        void get_score(float s)
        {
                score=s;
        }
        void put_score()
        {
                cout<<"sport"<<score;
        }
};

class result:public test,public sports
{
        float total;
   public:
        void display();
};

void result::display()
{
        total=sub1+sub2+score;
        put_no();
        put_marks();
        cout<<"\n total= "<<total<<endl;
}

int main()
{
        result student1;
        student1.get_no(001);
        student1.get_marks();
	student1.get_score(67);
        student1.display();
        return 0;
}

/*OUTPUT

Enter marks of sub1:
89

Enter marks of sub2:
45

 rollno= 1

 marks in sub1= 89

 marks in sub2= 45

 total= 201
			*/
