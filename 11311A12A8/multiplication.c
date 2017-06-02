#include<stdio.h>
main()
{
int md,mr,q,r,i,pp1,pp2,sum=0;
float p;
printf("enter md,mr:");
scanf("%d%d",&md,&mr);
printf("%16d\n",md);
printf("*%15d\n",mr);
printf("________________\n");
q=mr;
r=q%10;
pp1=md*r;
printf("%16d\n",pp1);
p=mr/10;
pp2=md*p*10;
printf("%16d\n",pp2);
sum=pp1+pp2;
printf("________________\n");
printf("%16d\n",sum);
printf("________________\n");
return 0;
}


