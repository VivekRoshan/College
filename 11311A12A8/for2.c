#include<stdio.h>
main()
{
int i,j,n;
printf("enter the n value");
scanf("%d",&n);
for(i=1;i<=n;i++);
{	for(j=1;j<=n-i;j++)
putchar('');
for(j=n-1;j<=n;j++)
putchar('*');
}
return 0;
}


