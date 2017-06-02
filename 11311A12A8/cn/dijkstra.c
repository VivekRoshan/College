#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

int min(int *a,bool *s,int n)
{
	int temp=INT_MAX;
	int i,j=-1;
	for(i=0;i<n;i++)
	{
		if(s[i]!=true)
		{
			if(temp>a[i])
			{	
			temp=a[i];
			j=i;
			}
		}
	}
return j;
}
				

main()
{
	bool s[20];
	int dist[20],a[20][20];
	int v=0,e,n,num,i,j,u;
	printf("Enter the number of Vertices :");
	scanf("%d",&n);
	printf("Enter the adjecency matrix \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==-1)
			a[i][j]=INT_MAX;
		}
	}
	for(i=0;i<n;i++)
	{
		s[i]=false;
		dist[i]=a[v][i];
	}
	s[v]=true;
	for(num=1;num<=n;num++)
	{
		u=min(dist,s,n);
		s[u]=true;
		for(i=0;i<n;i++)
		{
			if(a[u][i]>0 && a[u][i] != INT_MAX && s[i]==false)
			{
				if(dist[i]>dist[u]+a[u][i])
				{
					dist[i]=dist[u]+a[u][i];
				}
			}
		//printf("%d %d\n ",u,i);
			
		}
		//printf("%d %d\n ",u,i);

		
	}
	for(i=0;i<n;i++)
	{
	printf("%d",dist[i]);
	printf("\n");
	}
}


/* OUTPUT 1:
 * Enter the number of Vertices :6
 * Enter the adjecency matrix 0 50 10 -1 45 -1
 * -1 0 15 -1 10 -1
 *  20 -1 0 15 -1 -1
 *  -1 20 -1 0 35 3
 *  -1 -1 -1 30 0 -1
 *  -1 -1 -1 -1 -1 0
 *  0
 *  45
 *  10
 *  25
 *  45
 *  28
 *
 *   OUTPUT 2:
 *  [11311A12A8@itlab cn]$ ./a.out
 *  Enter the number of Vertices :8
 *  Enter the adjecency matrix 0 4 -1 -1 10 -1 -1 -1
 *  4 0 2 -1 4 3 3 -1
 *  -1 2 0 2 1 -1 -1 3
 *  -1 -1 2 0 2 -1 -1 -1
 *  -1 4 1 2 0 2 -1 -1
 *  -1 3 -1 -1 2 0 4 -1
 *  -1 3 -1 -1 -1 4 0 -1
 *  -1 -1 3 -1 -1 -1 -1 0
 *  0
 *  4
 *  6
 *  8
 *  7
 *  7
 *  7
 *  9
 *
 *  */
