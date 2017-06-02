/*Name:Vivek Roshan                              Date:1/3/2012
 * Class:IT F2      Rollnum:11311A12A8
 *program to convert infix expression to postfix */
#include<stdio.h>
#include<stdlib.h>
#include"stackADT.h"
#include<ctype.h>
#define NUMBER 0
int gettoken(char *s)
{
  int i=0,c;
  while((s[0]=c=getchar())==' '||c=='\t')
    ;
  s[1]='\0';
  if(!isdigit(c))
    return c;
  while(isdigit(s[++i]=c=getchar()))
     ;
  s[i]='\0';
  if(c!=EOF)
    ungetc(c,stdin);
  return NUMBER;
}

int priority(char c)
{
  switch(c)
  {
    case '(':return 0;
    case '+':
    case '-': return 1;
    case '*':
    case '/':
    case '%': return 2;
  }
}
int operator(char c)
{
  switch(c)
  {
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '(':
    case ')': return 1;
    default : return 0;
  }
}
int main()
{
   char s[80];
   struct stack st;
   elementtype token,temp;
   st=createstack(50);
   initstack(&st);
   while((token=gettoken(s))!=EOF)
   {
     if(token=='(')
       push(&st,token);
     else if(token==')')
       while((token=pop(&st))!='(')
         printf(" %c",token);
     else if(operator(token))
     {
       while((!empty(&st))&&(priority(token))<=priority(viewtop(st)))
         printf(" %c",pop(&st));
         push(&st,token);
     }
    else if(token==NUMBER)
{
     printf("%s",s);
}
    else if(token=='\n')
    {
      while(!empty(&st))
       printf("%c",pop(&st));
       putchar('\n');
    }
    else
      printf("error:expression fault \n");
    }
    disposestack(&st);
    return 0;
}
/*
[11311A12A8@itlab character]$ gcc convertion.c element.c stackADT.c
[11311A12A8@itlab character]$ ./a.out
2+3/4*6-5
234 /6 * +5-
*/
