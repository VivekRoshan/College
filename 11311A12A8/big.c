#include<stdio.h>
main()
{
int a,b;
printf("enter two numbers seperated by a space");
scanf("%d %d",&a,&b);
if(a>b)
printf("the bigger of the two numbers is %d\n",a);
else
printf("the bigger number is %d\n",b);
return 0;
}

