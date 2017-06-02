#include <stdio.h>

struct process
{
	int burst;
	int priority;
	int waiting;	
	int response;
	int tat;
};

void sorting(struct process k[],int m)
{
	int i,j;
	struct process temp;
	for(i=0;i<m;i++)
	{
		int ta;
		ta=k[i].priority;
		for(j=i+1;j<m;j++)
		{
			if(ta>k[j].priority)
			{
				temp=k[j];
				k[j]=k[i];
				k[i]=temp;
			}
		}
	}
}

	
int main()
{
        int m;
        printf("Enter the number of processes: ");
        scanf("%d",&m);
        struct process p[m];
        int i;
        for(i=0;i<m;i++)
        {
                printf("Enter the burst time of process %d :",(i+1));
                scanf("%d",&p[i].burst);
		printf("Enter the priority of process %d: ",(i+1));
		scanf("%d",&p[i].priority);
        }
	sorting(p,m);
	float atat=0,awt=0,btt=0;
	p[0].waiting=0;
        p[0].response=0;
        for(i=1;i<m;i++)
        {
                int j,temp=0;
                for(j=0;j<i;j++)
                {
                        temp+=p[j].burst;
                }
                p[i].response=temp-0;
                p[i].waiting=temp-0;
        }
        for(i=0;i<m;i++)
        {
                p[i].tat=p[i].burst+p[i].waiting;
        }
        for(i=0;i<m;i++)
        {
                awt+=p[i].waiting;
                btt+=p[i].burst;
                atat+=p[i].tat;
        }
        awt=awt/m;
        atat=atat/m;
	printf("\nProcess  Bursttime  Priority  Response  Waiting  Turnaround\n");
	for(i=0;i<m;i++)
	{
		printf("%7d%11d%10d%10d%9d%12d\n",(i+1),p[i].burst,p[i].priority,p[i].response,p[i].waiting,p[i].tat);
	}
	printf("Average waiting time: %f\n",awt);
	printf("Average turn around  time: %f\n",atat);
}
/*
[11311A12A8@itlab ~]$ ./a.out
Enter the number of processes: 4
Enter the burst time of process 1 :8
Enter the priority of process 1: 2
Enter the burst time of process 2 :5
Enter the priority of process 2: 1
Enter the burst time of process 3 :6
Enter the priority of process 3: 4
Enter the burst time of process 4 :3
Enter the priority of process 4: 3

Process  Bursttime  Priority  Response  Waiting  Turnaround
      1          5         1         0        0           5
      2          8         2         5        5          13
      3          3         3        13       13          16
      4          6         4        16       16          22
Average waiting time: 8.500000
Average turn around  time: 14.000000

*/
