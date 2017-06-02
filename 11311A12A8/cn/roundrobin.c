#include<stdio.h>
#include<stdlib.h>

struct process
{
        int id,at,bt,tt,wt;
};

int main()
{
        int i,n,awt,att,j,q,m;
        struct process p[50];
	printf("enter the value of q ");
	scanf("%d",&q);
        printf("Enter the no. of processes: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                p[i].id = i+1;
                printf("Enter the burst time of process %d: ",i+1);
                scanf("%d",&p[i].bt);
		printf("Enter the arrival time of the process %d: ",i+1);
		scanf("%d",&p[i].at);
		
        }
	struct process temp;
	for(i=0;i<n;i++)
        {
                temp = p[i];
                for(j=i+1;j<n;j++)
                {
                        if(p[i].at>p[j].at)
                        {
                                temp = p[i];
                                p[i] = p[j];
                                p[j] = temp;
                        }
                }
        }
       if(p[n-1].bt%t==0)
	m=(p[n-1].bt/q);
       else
        m=(p[n-1].bt/q)+1;
	for(j=0;j<m;j++)
	{
		if(p[j].bt>q)
		{
			

		
	printf("Process number\tBurst time\tWaiting time\tTurn-around time\n"); 	for(i=0;i<5;i++)
	{
         printf("%14d\t%10d\t%12d\t%16d\n",p[i].id,p[i].bt,p[i].wt,p[i].tt);
	}
} 

