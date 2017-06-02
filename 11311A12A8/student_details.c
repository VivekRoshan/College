/*this is a program to find student details
 * name:vivek
 * roll:11311A12A8
 * class:f2*/
#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[20];
	float marks;
}s;
struct student read_data(int i)
{
	struct student s;
	s.roll_no=i+1;
	printf("enter name of students %d\n",i+1);
	scanf("%s",&s.name);
	printf("enter the marks");
	scanf("%f",&s.marks);
	return s;
}
void print_data(struct student s)
{
	printf("roll no: %d\n",s.roll_no);
	printf("name: %d\n",s.name);
	printf("marks: %f\n",s.marks);
	putchar('\n');
}
float add_marks(struct student s)
{
	if(s.marks>10 && s.marks<12)
	{
	s.marks=s.marks+2;
	}
	return s.marks;
}
void edit_name(struct student s)
{
	char name[20];
	printf("enter the new name");
	scanf("%s",&name);
	strcpy(name,s.name);
	printf("the new name is %s",s.name);

}
int menu()
{
	int option;
	printf("1:read data\n 2:print data\n 3:add marks\n 4:edit name\n 5:exit\n");
	printf("enter your choice");
	scanf("%d",&option);
	return option;
}
main()
{
	struct student s[10];
	int i,choice;
	while((choice=menu())!=6)
	{
	switch(choice)
	{
		case 1:read_data();
		       break;
		case 2:print_data();
		       break;
		case 3:add_marks();break;
		case 4:edit_name();break;
  		default:printf("exit");break;	}
	}
return 0;
}

