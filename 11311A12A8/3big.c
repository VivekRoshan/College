#include<stdio.h>
main()
{
int a,b,c,d,e;
printf("enter all the values");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a>b && b>c && c>d && d>e)
printf("the biggest num is %d",a);
else if(b>c && c>d && d>e)
printf("the biggest num is %d",b);
else if(c>d && d>e)
printf("the biggest num is %d",c);
else if(d>e)
printf("the biggest is %d",d);
else
printf("the biggest num is %d",e);
return 0;
}

