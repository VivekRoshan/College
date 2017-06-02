/*name:vivek roshan roll:11311A12A8
 * class:it f2 date:16/02/2012 
 * stack.c*/
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

/* [11311A12A8@itlab ~]$ gcc stack.c element.c stackADT.c
[11311A12A8@itlab ~]$ ./a.out
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice1
enter the integer1
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice1
enter the integer2
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice1
enter the integer3
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice2
            3
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice3
            2
        1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice4
top-->
            2
            1
-------------------------stack  1.push
        2.pop
        3.view top
        4.display
        5.exit
enter choice5*/

