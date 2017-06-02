#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[65500],b[65000]="",i=0,j=0;
	fgets(a,65500,stdin);
	strcpy(b,"dlestx");
	j=6;
	for(i=0;i<strlen(a);i++)
	{
		b[j]=a[i];
                j++;

		if(a[i]=='e'&&a[i-1]=='l'&&a[i-2]=='d')
		{			
			strcat(b,"dle");
			j=j+3;
		}	
	}
	
	strcat(b,"dleetx");
	puts(b);
	return 0;
}
