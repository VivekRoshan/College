/*program to find the number of items and cost
 * name:s.vivek roshan
 * num:11311A12A8*/
#include<stdio.h>
main()
{
	int n,i,j,p;
	printf("enter the num of items");
	scanf("%d",&n);
	printf("enter the cost");
	scanf("%d",&p);
	printf("num of items     cost\n");
	for(i=1;i<n;i++)
	{
		printf("%7d\t%12d\n",i,p*i);
	}
return 0;
}
 
