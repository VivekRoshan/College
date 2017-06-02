/*PROGRAM TO IMPLEMENT DISTANCE VECTOR ALGORITHM */
 
#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("Enter no of nodes in subnet:");
        scanf("%d",&n);
	int a[n][n];
	  struct rt
        {
                int rout[n];
        };
        for(i=0;i<n;i++)
	{
                for(j=0;j<n;j++)
		{
                        a[i][j]=0;
                }
        }
        for(i=0;i<n;i++)
	{
                for(j=0;j<n;j++)
		{
                        if(i==j)
                                a[i][j]=0;
                        else
			{
                                if(i>j)
				{
                                        a[i][j]=a[j][i];
                                }
                                else
				{
                                printf("path from %d to %d:",i,j);
                                scanf("%d",&a[i][j]);
                                a[j][i]=a[i][j];
                                }
                        }
                }
	}
	int node,adj[n],m=0;
	printf("enter the node for which routing table is to be calculated:");
	scanf("%d",&node);
	for(i=0;i<n;i++)
	{
		if(a[node][i]!=0)
		{
			adj[m++]=i;
		}
	}
	struct rt tables[m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the delay to go from %d to %d:",j,adj[i]);
			scanf("%d",&tables[i].rout[j]);
		}
	}
	int delays[m];
	for(i=0;i<m;i++)
	{
	printf("enter the delay from %d to %d:",node,adj[i]);
	scanf("%d",&delays[i]);
	}
 	int rrtable[n][2];
	for(i=0;i<n;i++)
	{
		int min=5000,temp=0,in;
		if(i==node)
		{
			rrtable[i][0]=0;
                	rrtable[i][1]=-1;
		}
		else
		{
		for(k=0;k<m;k++)
		{
			temp=tables[k].rout[i]+delays[k];
			if(temp<min)
			{
				min=temp;
				in=adj[k];
			}
		}
		rrtable[i][0]=min;
		rrtable[i][1]=in;
		}
	}
	printf("TO\tnode%d\tintermediate router\n",node);
	for(i=0;i<n;i++)
		printf("%d\t%d\t%d\n",i,rrtable[i][0],rrtable[i][1]);
}
/* output:
 * Enter no of nodes in subnet:12
 * path from 0 to 1:1
 * path from 0 to 2:0
 * path from 0 to 3:0
 * path from 0 to 4:1
 * path from 0 to 5:0
 * path from 0 to 6:0
 * path from 0 to 7:0
 * path from 0 to 8:0
 * path from 0 to 9:1
 * path from 0 to 10:0
 * path from 0 to 11:0
 * path from 1 to 2:1
 * path from 1 to 3:0
 * path from 1 to 4:0
 * path from 1 to 5:0
 * path from 1 to 6:1
 * path from 1 to 7:0
 * path from 1 to 8:0
 * path from 1 to 9:0
 * path from 1 to 10:0
 * path from 1 to 11:0
 * path from 2 to 3:1
 * path from 2 to 4:1
 * path from 2 to 5:0
 * path from 2 to 6:0
 * path from 2 to 7:0
 * path from 2 to 8:0
 * path from 2 to 9:0
 * path from 2 to 10:0
 * path from 2 to 11:0
 * path from 3 to 4:0
 * path from 3 to 5:0
 * path from 3 to 6:0
 * path from 3 to 7:1
 * path from 3 to 8:0
 * path from 3 to 9:0
 * path from 3 to 10:0
 * path from 3 to 11:0
 * path from 4 to 5:1
 * path from 4 to 6:0
 * path from 4 to 7:0
 * path from 4 to 8:1
 *path from 4 to 9:0
path from 4 to 10:0
path from 4 to 11:0
path from 5 to 6:1
path from 5 to 7:0
path from 5 to 8:0
path from 5 to 9:0
path from 5 to 10:0
path from 5 to 11:0
path from 6 to 7:1
path from 6 to 8:0
path from 6 to 9:0
path from 6 to 10:0
path from 6 to 11:0
path from 7 to 8:0
path from 7 to 9:1
path from 7 to 10:0
path from 7 to 11:1
path from 8 to 9:1
path from 8 to 10:0
path from 8 to 11:0
path from 9 to 10:1
path from 9 to 11:0
path from 10 to 11:1
enter the node for which routing table is to be calculated:9
enter the delay to go from 0 to 0:0
enter the delay to go from 1 to 0:12
enter the delay to go from 2 to 0:25
enter the delay to go from 3 to 0:40
enter the delay to go from 4 to 0:14
enter the delay to go from 5 to 0:23
enter the delay to go from 6 to 0:18
enter the delay to go from 7 to 0:17
enter the delay to go from 8 to 0:21
enter the delay to go from 9 to 0:9
enter the delay to go from 10 to 0:24
enter the delay to go from 11 to 0:29
enter the delay to go from 0 to 7:20
enter the delay to go from 1 to 7:31
enter the delay to go from 2 to 7:19
enter the delay to go from 3 to 7:8
enter the delay to go from 4 to 7:30
enter the delay to go from 5 to 7:19
enter the delay to go from 6 to 7:6
y to go from 7 to 7:0
enter the delay to go from 8 to 7:14
enter the delay to go from 9 to 7:7
enter the delay to go from 10 to 7:22
enter the delay to go from 11 to 7:9
enter the delay to go from 0 to 8:24
enter the delay to go from 1 to 8:36
enter the delay to go from 2 to 8:18
enter the delay to go from 3 to 8:27
enter the delay to go from 4 to 8:7
enter the delay to go from 5 to 8:20
enter the delay to go from 6 to 8:31
enter the delay to go from 7 to 8:20
enter the delay to go from 8 to 8:0
enter the delay to go from 9 to 8:11
enter the delay to go from 10 to 8:22
enter the delay to go from 11 to 8:33
enter the delay to go from 0 to 10:21
enter the delay to go from 1 to 10:28
enter the delay to go from 2 to 10:36
enter the delay to go from 3 to 10:24
enter the delay to go from 4 to 10:22
enter the delay to go from 5 to 10:40
enter the delay to go from 6 to 10:31
enter the delay to go from 7 to 10:19
enter the delay to go from 8 to 10:22
enter the delay to go from 9 to 10:10
enter the delay to go from 10 to 10:0
enter the delay to go from 11 to 10:9
enter the delay from 9 to 0:8
enter the delay from 9 to 7:12
enter the delay from 9 to 8:10
enter the delay from 9 to 10:6
TO      node9   intermediate router
0       8       0
1       20      0
2       28      8
3       20      7
4       17      8
5       30      8
6       18      7
7       12      7
8       10      8
9       0       -1
10      6       10
11      15      10
*/
