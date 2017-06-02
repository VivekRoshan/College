#include<stdio.h>
main()
{
int a,b,p,y,lcm,gcd;
printf("enter two values");
scanf("%d%d",&a,&b);
p=a*b;
if(a>b)
y=a-b;
if(a<b)
y=b-a;
lcm=p/y;
gcd=p/lcm;
printf("lcm and gcd are %d\t%d\n",lcm,gcd);
return 0;
}

