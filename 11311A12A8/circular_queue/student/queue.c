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
[11311A12A8@itlab student]$ gcc queue.c queueADT.c element.c
[11311A12A8@itlab student]$ ./a.out
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice1
enter the rollnumber108
enter the name:vivek
enter the marks23
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice1
enter the rollnumber101
enter the name:vamshi
enter the marks12
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice1
enter the rollnumber71
enter the name:chandu
enter the marks12
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice2
rollno is 108
name is vivek
marks are 23.000000

        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice3
rollno is 101
name is vamshi
marks are 12.000000

        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice4
head--->
rollno is 101
name is vamshi
marks are 12.000000

rollno is 71
name is chandu
marks are 12.000000

rear--->
        1.add
        2.delete
        3.view head
        4.display
        5.exit
enter choice5
*/
