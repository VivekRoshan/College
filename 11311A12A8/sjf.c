#include<stdio.h>
#include<stdlib.h>

struct process
{
	int id,at,bt,tt,wt;
};

int main()
{
	int i,n,awt,att,j;
	struct process p[50];
	printf("Enter the no. of processes: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)	
	{
		p[i].id = i+1;
		printf("Enter the burst time of process %d: ",i+1);
		scanf("%d",&p[i].bt);
	}
	struct process temp;
	for(i=0;i<n;i++)
	{
		temp = p[i];
		for(j=i+1;j<n;j++)
		{
			if(p[i].bt>p[j].bt)
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	p[0].wt = 0;
	int sum=0;
	for(i=1;i<n;i++)
	{
		sum += p[i-1].bt;
		p[i].wt = sum;
	}
	p[0].tt = p[0].bt;
	sum = p[0].bt;
	for(i=1;i<n;i++)
	{
		sum += p[i].bt;
		p[i].tt = sum;
	}
	for(i=0;i<n;i++)
        {
                temp = p[i];
                for(j=i+1;j<n;j++)
                {
                        if(p[i].id>p[j].id)
                        {
                                temp = p[i];
                                p[i] = p[j];
                                p[j] = temp;
                        }
                }
        }
	printf("Process number\tBurst time\tWaiting time\tTurn-around time\n");	for(i=0;i<5;i++)
	{
		printf("%14d\t%10d\t%12d\t%16d\n",p[i].id,p[i].bt,p[i].wt,p[i].tt);
	}
	printf("The average waiting time: ");
	float a = 0;
	for(i=0;i<n;i++)
	{
		a += p[i].wt;
	}
	a = a/(float)n;
	printf("%f\n",a);
	printf("The average turn-around time: ");
        a = 0;
        for(i=0;i<n;i++)
        {
                a += p[i].tt;
        }
        a /= (float)n;
        printf("%f\n",a);			
	return 0;
}
