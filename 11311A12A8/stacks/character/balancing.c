/*Name:Vivek Roshan                              Date:1/3/2012
 *  * Class:IT F2      Rollnum:11311A12A8
 * program for checking wheather an expression is balanced or not */

#include<stdio.h>
#include<stdlib.h>
#include"stackADT.h"
int opening(char c)
{
  return((c=='(')||(c=='{')||(c=='['));
}
int closing(char c)
{
  return((c==')')||(c=='}')||(c==']'));
}
char counter(char c)
{
  if(c==')')
   return '(';
  if(c=='}')
   return '{';
  if(c==']')
   return '[';
  return '\0';
}
int main()
{
  struct stack s;
  elementtype c;
  s=createstack(50);
  initstack(&s);
  while((c=getchar())!='\n')
  {
    if(opening(c))
      push(&s,c);
    else if(closing(c))
    {
      if(empty(&s))
  {
        printf("error:unbalance \n");
      }
    else if(pop(&s)!=counter(c))
    {
      printf("error:unbalance \n");
      exit(2);
    }
    }
  }
  if (empty(&s))
   printf("expression is balanced \n");
  else
   printf("error: unbalance \n");
  disposestack(&s);
  return 0;
}

