/*S.Vivek Roshan                                 Roll:11311a12A8
 * Class:IT F2                                   Date:10/5/12*/
#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;

class Person
{
	char name[20];
	char town[10];
	int age;
	char gender;
public:
	void getData();
	void getData(char *,char *, int ,char);
	void displayData();
	int knowAge();
	void nextYear();
	void editName();
};

void Person:: getData()
{
	char n[20],t[20];
	cout<<"enter name:  ";
	cin>>n;
	cout<<"enter town:  ";
	cin>>t;
	cout<<"enter age:  ";
	cin>>age;
	cout<<"gender (M/F):  ";
	cin>>gender;
	strcpy(name,n);
	strcpy(town,t);
}

void Person::getData(char *n,char *t,int a,char g)
{
	strcpy(name,n);
	strcpy(town,t);
	age=a;	
	gender=g;
}

void Person::displayData()
{
	if(gender=='M'||gender=='m')
		cout<<"\nMr.";
	else
		cout<<"\nMs.";
	cout<<name<<"("<<age<<")"<<endl;
	cout<<town<<endl;
}

int Person::knowAge()
{
	return age;
}

void Person::nextYear()
{
	age++;
}

void Person::editName()
{
	char n[20];
	cout<<" Name is: "<<name<<endl;
	cout<<" Changed name is: ";
	cin>>n;
	strcpy(name,n);
}

int main()
{
	Person p;
	p.getData();
	p.displayData();
	cout<<"age is: "<<p.knowAge()<<endl;
	p.nextYear();
	p.displayData();
	cout<<"age is: "<<p.knowAge()<<endl;
	p.editName();
	p.displayData();
	p.nextYear();
	p.displayData();
	return 0;
}
/*
[11311A12A8@itlab cpp]$ g++ person.cpp
[11311A12A8@itlab cpp]$ ./a.out
enter name:  vivek
enter town:  kmm
enter age:  18
gender (M/F):  m

[11311A12A8@itlab cpp]$ g++ person.cpp
[11311A12A8@itlab cpp]$ ./a.out
enter name:  vivek
enter town:  kmm
enter age:  18
gender (M/F):  m

Mr.vivek(18)
kmm
age is: 18

Mr.vivek(19)
kmm
age is: 19
 Name is: vivek
 Changed name is: vivek roshan

Mr.vivek(19)
kmm

Mr.vivek(20)
kmm
*/
