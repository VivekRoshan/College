/*name:vivek roshan roll:11311A12A8
 * class:it f2 date:16/02/2012 
 * stack.c*/
#include<stdio.h>
#include<stdlib.h>
#include"stackADT.h"           //including stackADT.h header file
int menu()
{
int choice;
printf("\t1.push\n\t2.pop\n\t3.view top\n\t4.display\n\t5.exit\n"); //choices
printf("enter choice");
scanf("%d",&choice);
return choice;
}
int main()    //main program
{
struct stack s;
int choice;
elementtype x;
s=createstack(20);   //calling the function
initstack(&s);
while((choice=menu())!=5)     //calling the function

{
	switch(choice)     //switch case
	{
	case 1:x=readelement();
	       push(&s,x);
	       break;
	case 2:x=pop(&s);
	      showelement(x);
	      break;
	case 3:showelement(viewtop(s));
	       break;
	case 4:display(s);
	       break;
	default:printf("error\n");
	}
}
return 0;
}

/*[11311A12A8@itlab employee]$ gcc stack.c element.c stackADT.c
[11311A12A8@itlab employee]$ ./a.out
	:::OUTPUTS::::
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice1
enter the employee id12
enter the namevivek
enter the salary2000
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice1
enter the employee id13
enter the nameroshan
enter the salary1200
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice1
enter the employee id14
enter the namevicky
enter the salary1234
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice2
employee id is    14
employee name is vicky
employee salary is 1234.000000
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice3
employee id is    13
employee name is roshan
employee salary is 1200.000000
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice4
top-->
employee id is    13
employee name is roshan
employee salary is 1200.000000
employee id is    12
employee name is vivek
employee salary is 2000.000000
-------------------------stack  1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice5
[11311A12A8@itlab employee]$
*/

