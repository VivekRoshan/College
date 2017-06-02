#include<stdio.h>
main()
{
int r,n,ams=0,t;
printf("enter a number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
ams=ams+r*r*r;
n=n/10;
}
t=ams;
if(ams=n)
printf("the num is amstrong number");
return 0;
}

