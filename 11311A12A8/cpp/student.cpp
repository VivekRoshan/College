#include<stdio.h>
#include<iostream>
using namespace std;
class Student
{
	int rollNo;
	char name[20];
	float marks;
	char grade;
  public:
	void readData(int i);
	char getGrade();
	void printData();
};

void Student::readData(int i)
{
	rollNo=i+1;

	cout<<"Enter name of the student "<<rollNo<<" : ";
	cin>>name;
	cout<<"\nEnter marks obtained (%): ";
	cin>>marks;
	
}

char Student::getGrade()
{

	if(marks>=90)
		return 'a';
	
	else if(marks>=80)
		return 'b';
	
	else if(marks>=60)
		return 'c';
	
	else if(marks>=50)
		return 'd';
	
	else if(marks>=40)
		return 'e';
	
	else
		return 'f';
}

void Student ::printData()
{
	cout<<"Rollno=\t"<<rollNo<<endl;
	cout<<"Name :\t"<<name<<endl;
	cout<<"Marks=\t"<<marks<<endl;
	cout<<"grade=\t"<<getGrade()<<endl;

}	

int main()
{
	Student a[5];
	int i;
	for(i=0;i<5;i++)
		a[i].readData(i);
	cout<<"\n Details of the class is as follows \n\n";
	for(i=0;i<5;i++)
		a[i].printData();
	return 0;
}




/*          OUTPUTS
[11311A12A8@itlab cpp]$ ./a.out
Enter name of the student 1 : vivek

Enter marks obtained (%): 99
Enter name of the student 2 : sasi

Enter marks obtained (%): 100
Enter name of the student 3 : chandu

Enter marks obtained (%): 97
Enter name of the student 4 : vamshi

Enter marks obtained (%): 98
Enter name of the student 5 : peddanna

Enter marks obtained (%): 12

 Details of the class is as follows

Rollno= 1
Name :  vivek
Marks=  99
grade=  a
Rollno= 2
Name :  sasi
Marks=  100
grade=  a
Rollno= 3
Name :  chandu
Marks=  97
grade=  a
Rollno= 4
Name :  vamshi
Marks=  98
grade=  a
Rollno= 5
Name :  peddanna
Marks=  12
grade=  f
*/
