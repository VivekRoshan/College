#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[65500],b[65000],i=0,j=0,count=0;
	gets(a);
	for(i=0;i<sizeof(a);i++)
	{
		if(a[i]=='d'&&a[i+1]=='l'&&a[i+2]=='e')
		{			
			j=j+3;
		}
		b[j]=a[i];
                j++;			
	}
	char c[65500]="dlestx";
	strcat(b,"dleetx");
	strcat(c,b);
	printf("%s\n",c);
	return 0;
}
