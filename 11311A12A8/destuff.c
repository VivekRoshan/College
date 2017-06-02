#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[65500],b[65000],i=0,j=0,count=0;
	gets(a);
	for(i=0;i<sizeof(a);i++)
	{
		if(a[i]!='1') 
		{
			b[j]=a[i];
			
		}
		if(a[i]=='1')
		{
			b[j]=a[i];
			
			count++;
		}
		j++;
		if(count==5)
		{
			
			j++;
			count=0;
		}	
	}
	printf("%s\n",b);
	return 0;
}
