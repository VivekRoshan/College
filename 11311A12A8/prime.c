/*program to find the prime numbers*/
#include<stdio.h>
main()
{
int i=3,n;
printf("enter a positive number");      
scanf("%d",&n);
if(n<=1)
printf("1 is neither prime nor composite");
else if(n==2)
printf("%d is even prime\n",n);
while(n%i!=0)
i+=2;
if(i<n)
printf("the number is not prime",n);
else
printf("the number is prime",n);
return 0;
}

