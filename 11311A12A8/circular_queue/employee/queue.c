/*Name:S.Vivek Roshan                            Roll:11311A12A8
 * Class:IT F2                                   Date:15/03/2012 
 * queue.c*/
#include<stdio.h>
#include<stdlib.h>
#include"queueADT.h"           //including stackADT.h header file
int menu()
{
int choice;
printf("\t1.add\n\t2.delete\n\t3.view head\n\t4.display\n\t5.exit\n"); //choices
printf("enter choice");
scanf("%d",&choice);
return choice;
}
int main()    //main program
{
struct queue s;
int choice;
elementtype x;
s=createqueue(20);   //calling the function
initqueue(&s);
while((choice=menu())!=5)     //calling the function

{
	switch(choice)     //switch case
	{
	case 1:x=readelement();
	       add(&s,x);
	       break;
	case 2:x=delete(&s);
	      showelement(x);
	      break;
	case 3:showelement(viewhead(s));
	       break;
	case 4:display(s);
	       break;
	default:printf("error\n");
	}
}
return 0;
}
/*
 * OUTPUTS
[11311A12A8@itlab employee]$ gcc queue.c queueADT.c element.c
[11311A12A8@itlab employee]$ ./a.out
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice1
enter the employee id13
enter the namevivek
enter the salary1234
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice1
enter the employee id14
enter the nameroshan
enter the salary2345
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice1
enter the employee id15
enter the namevicky
enter the salary3456
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice2
employee id is    13
employee name is vivek
employee salary is 1234.000000
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice3
employee id is    14
employee name is roshan
employee salary is 2345.000000
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice4
head--->
employee id is    14
employee name is roshan
employee salary is 2345.000000
employee id is    15
employee name is vicky
employee salary is 3456.000000
rear--->
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice5
*/
