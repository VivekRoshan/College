#include<stdio.h>
main()
{
char c;
printf("enter a character");
scanf("%c",&c);
if(c>='A' && c<'Z')
printf("the character is capital");
else
printf("the character is not capital");
return 0;
}

