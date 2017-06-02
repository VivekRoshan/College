/*program to find the gcd of two numbers*/
#include<stdio.h>
int gcd(int a,int b)
{
if(b==0)
return a;
else
return(gcd(b,a%b));
}
main()
{
int a,b,c;
printf("enter two values");
scanf("%d%d",&a,&b);
c=gcd(a,b);
printf("gcd is %d\n",c);
return 0;
}

