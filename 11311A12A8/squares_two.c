#include<stdio.h>
main()
{
int r,n,sqa=0;
printf("enter the num.");
scanf("%d",&n);
while(n>0)
{
r=n%10;
sqa=sqa+r*r;
n=n/10;
}
printf("sqa is %d",sqa);
return 0;
}


