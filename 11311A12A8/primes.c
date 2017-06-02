#include<stdio.h>
main()
{
int n,i,j,count;
printf("read the number:");
scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
	if(count==2)
	printf("%d\t",i);
	}
	return 0;
}

