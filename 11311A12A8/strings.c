#include<stdio.h>
#include<string.h>
main()
{
	char s[15],t[15];
	int i,j;
	printf("enter a string");
	scanf("%s",&s);
	for(i=0;i<15;i++)
	{
		for(j=15;j>0;j--)
		{	
			t[j]=s[i];
		}
	}
printf("%s",t);
return 0;
}

