#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*struct delay
{
	int de;
	int* ou;
};*/
struct temp
{
	int x;
};
int min(int* c,int* de,int p,int i)
{
	struct temp t[10];	 
	int j;
	for(j=1;j<=p;j++)
	{
	t[j].x=de[j]+c[i][j];
	}
	int temp=0;
	temp=t[1].x;
	for(j=2;j<=p;j++)
	{
		if(temp>t[j].x)
		{
			temp=t[j].x;
		}
	}
return temp;
}			
int count(int *a,int n,int m)
{
int count=0,j;
        for(j=1;j<=n;j++)
        {
                if(a[m][j]==1)
                {
                        count++;
                }
        }
return count;
}		
			
main()
{	
	int n,i,j,m,p;
	int a[20][20],c[20][20];
	int b[20],d[10];
	//struct delay d;
	printf("enter no. of nodes:");
	scanf("%d",&n);
	printf("enter the adjacency matrix:");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("enter the source node i in row");
	scanf("%d",&m);
	p=count(a,n,m);
	int d=0;
	for(j=1;j<=n;j++)
        {
                if(a[m][j]==1)
                {
                        b[d++]=j;
                }
        }
	printf("enter the input values:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=p;j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	for(i=1;i<=count;i++)
	{
		printf("enter the delay value for %d%d",b[i],m);
		scanf("%d",&de[i]);
	}
	for(i=1;i<=n;i++)
	{
		d.ou[i]=min(c,de,p,i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",d.ou);
	}
}
	
	
	
	
	

	
