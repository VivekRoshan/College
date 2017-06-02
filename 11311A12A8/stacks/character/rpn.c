#include<stdio.h>
#include<stdlib.h>
#include"stackADT.h"
#include<ctype.h>
#define NUMBER 0
int gettoken(char *s)
{
  int i=0,c;
  while((s[0]=c=getchar())==''||c=='\t')
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
int main()
{
  struct stack st;
  int type;
  elementtype op2;
  char s[80];
  st=createstack[50];
  initstack(&st);
  while((type=gettoken(s))!=EOF)
  {
    switch(type)
case NUMBER :push(&st,atoi(s));
	     break

