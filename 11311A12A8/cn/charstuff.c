#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c[50],b[50]={'d','l','e','s','t','x'};
	printf("Enter the size of the message: ");
	int n;
	scanf("%d",&n);
	printf("Enter the message: ");
	scanf("%s",&c);
	int i=0,j=6,k;
	for(k=0;k<n;k++)
	{
		if(c[k]=='d' && c[k+1]=='l' && c[k+2]=='e')
		{
			int temp=2;
			while(temp--)
			{
				b[j++] = c[k];
				b[j++] = c[k+1];
				b[j++] = c[k+2];	
			}
			k+=2;
		}
		else
		{
			b[j] = c[k];
			j++;
		}
	}
	printf("After stuffing\n");
	for(k=0;k<j;k++)
	{
		printf("%c",b[k]);
	}
	printf("dleetx\n");
	printf("After destuffing\n");
	char d[50];
	i=0;
	for(k=6;k<j;k++)
	{
		if(b[k]=='d' && b[k+1]=='l' && b[k+2]=='e')
                {
                        d[i++] = b[k];
                        d[i++] = b[k+1];
                        d[i++] = b[k+2];
			k += 5;
                }
                else
                {
                        d[i] = b[k];
                        i++;
                }

	}
	for(k=0;k<n;k++)
	{
		printf("%c",d[k]);
	}
	printf("\n");
	return 0;
}
/*
Output-
Enter the size of the message: 6
Enter the message: dledle
After stuffing
dlestxdledledledledleetx
After destuffing
dledle
*/
