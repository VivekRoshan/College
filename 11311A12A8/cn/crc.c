#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void xor(int s[100],int g[100],int n)
{
	int c;
	for(c=0;c<n;c++)
	{
		s[c]=((s[c]^g[c]));
	}
}
void leftshift(int s[100],int n)
{
	int x;
	for(x=0;x<n-1;x++)
	{
		s[x]=s[x+1];
	}
}
int main()
{
	int s[100],temp[100],g[100],res[100];
	int b,d,i,q,j,k,l,m,t,h,sl,gl,y;
	char st[100],gt[100];
	printf("enter data\n");
	gets(st);

	sl=strlen(st);
	printf("enter the generator\n");
	gets(gt);
	gl=strlen(gt);
	printf("%d%d\n",sl,gl);;
	 printf("enter the data\n");
        for(i=0;i<sl;i++)
        {
                scanf("%d",&s[i]);
        }
	for(l=0;l<sl;l++)
        {
                temp[l]=s[l];
	}
        for(b=0;b<sl;b++)
        {
                res[b]=s[b];
        }
	printf("enter the generator\n");
	for(j=0;j<gl;j++)
	{
		scanf("%d",&g[j]);
	}
	
	for(k=0;k<gl-1;k++)
	{
		s[sl+k]=0;
	}
	printf("appended data is ");
	for(y=0;y<sl+gl-1;y++)
	{
		printf("%d",s[y]);
	}
	printf("\n");
	for(m=1;m<=sl;m++)
	{
		int ul=sl+gl-m;
		if(s[0]==0)
		{
			leftshift(s,ul);
		}
		else {
			xor(s,g,gl);
			leftshift(s,ul);}
	}
	for(q=0;q<3;q++)
	{
	printf("%d",s[q]);
	}
	printf("\n");
	for(t=0;t<gl-1;t++)
	{
		temp[sl+t]=s[t];
	}
	int ansl=sl+gl-1;
	for(h=0;h<ansl;h++)
	{
		printf("%d",temp[h]);
	}
printf("\nreceiver side\n");
for(m=1;m<=sl;m++)
        {
                int ul=sl+gl-m;
                if(temp[0]==0)
                {
                        leftshift(temp,ul);
                }
                else {
                        xor(temp,g,gl);
                        leftshift(temp,ul);}
        }

for(d=0;d<3;d++)
{
printf("%d",temp[d]);
}
printf("\n");
if(temp[0]==0 && temp[1]==0  && temp[2]==0)
{
	printf("\nmessage is accepted :\n");
	for(b=0;b<sl;b++)
	{
	printf("%d",res[b]);
	}
}
else
printf("\nrejected\n");
return 0;
}
