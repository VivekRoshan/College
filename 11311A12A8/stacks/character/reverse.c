/*Name:Vivek Roshan                              Date:1/3/2012
 *  * Class:IT F2      Rollnum:11311A12A8
 * program to find reverse of the string */

#include<stdio.h>
#include<stdlib.h>
#include"stackADT.h"
int main()
{
	struct stack s;
	char c;
	s=createstack(20);
	initstack(&s);
	while((c=getchar())!='\n')
		push(&s,c);
	printf("the reverse of the string is :");
	while(!empty(&s))
       		putchar(pop(&s));
	putchar('\n');
	disposestack(&s);
	return 0;
}
/*
[11311A12A8@itlab character]$ gcc reverse.c element.c stackADT.c
[11311A12A8@itlab character]$ ./a.out
vivek
the reverse of the string is :keviv
[11311A12A8@itlab character]$ ./a.out
roshan
the reverse of the string is :nahsor
*/
