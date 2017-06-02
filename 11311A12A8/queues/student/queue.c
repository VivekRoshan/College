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
 *     OUTPUTS
[11311A12A8@itlab student]$ gcc queue.c element.c queueADT.c
[11311A12A8@itlab student]$ ./a.out
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice1
enter the rollnumber12
enter the name:viv
enter the marks98
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice1
enter the rollnumber13
enter the name:ros
enter the marks98
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice1
enter the rollnumber14
enter the name:vic
enter the marks89
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice2
rollno is 12
name is viv
marks are 98.000000

        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice3
rollno is 13
name is ros
marks are 98.000000

        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice4
head--->
rollno is 13
name is ros
marks are 98.000000

rollno is 14
name is vic
marks are 89.000000

-------------------tail 1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice5
*/

