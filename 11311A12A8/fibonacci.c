#include<stdio.h>
main()
{
int fib,febpre1=1,febpre2=0,n,i=3;
printf("enter the num.");
scanf("%d",&n);
printf("\t%d\n",febpre1);
printf("\t%d\n",febpre2);
while(i<=n)
{
fib=febpre1+febpre2;
printf("\t%d\n",fib);
febpre2=febpre1;
febpre1=fib;
i++;
}
return 0;
}

