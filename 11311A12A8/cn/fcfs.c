#include<stdio.h>
#include<stdlib.h>


void swap(int *x, int*y)
{
        int t;
        t=*x;
        *x=*y;
        *y=t;
}

struct process
{
	int num,at,bt,rt,wt,tat;
};
int main()
{
	struct process p[50];
	int i,j,n;
	//int res[6],wt[5],tat[5];
        //float awt=0;ares=0;atat=0;
	printf("Enter no of processes:");
	scanf("%d",&n);
	 for(j=1;j<=n;j++)
	{
		p[j].num=j;
	} 
	for(j=1;j<=n;j++)
	{
	printf("Enter the arrival time of process%d:",j);
	scanf("%d",&p[j].at);
	}
	for(j=1;j<=n;j++)
        {
        printf("Enter the burst time of process%d:",j);
        scanf("%d",&p[j].bt);
        }
	for(i=0;i<n-1;i++)
              for(j=n-1;j>=i;j--)
                        if(p[j].at>p[j+1].at)
                        {
                           swap(&p[j],&p[j+1]);
                        }
	for(i=1;i<=n;i++)
	{
	printf("%d\t%d\t%d\t\n",p[i].num,p[i].at,p[i].bt);
	}
}


