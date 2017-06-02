#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[65500],b[65000],i=0,j=0,count=0;
	fgets(a,65500,stdin);
	strcpy(b,"01111110");
	for(i=0;i<sizeof(a);i++)
	{
		
			b[j]=a[i];
			j++;	
		
		if(a[i]=='1')
			count++;
	
		if(count==5)
		{
			b[j]='0';
			j++;
			count=0;
		}	
	}
	printf("%s\n",b);
	return 0;
}
