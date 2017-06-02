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

/*11311A12A8@itlab student]$ gcc stack.c element.c stackADT.c
[11311A12A8@itlab student]$ ./a.out
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice1
enter the rollnumber1
enter the name:vivek
enter the marks99
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice1
enter the rollnumber2
enter the name:vamshi
enter the marks98
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice1
enter the rollnumber3
enter the name:chandu
enter the marks97
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice2
rollno is 3
name is chandu
marks are 97.000000

        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice3
rollno is 2
name is vamshi
marks are 98.000000

        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice4
top-->
rollno is 2
name is vamshi
marks are 98.000000

rollno is 1
name is vivek
marks are 99.000000

-------------------------stack  1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice5
[11311A12A8@itlab student]$
*/
