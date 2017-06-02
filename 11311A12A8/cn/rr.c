#include<stdio.h>
#include<stdlib.h>

struct process
{
        int id,at,bt,rt,tat,wt,temp,s,f,c;
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
		p[i].temp = p[i].bt;
		p[i].c=0;
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
       if(p[n-1].bt%q==0)
        m=(p[n-1].bt/q);
       else
        m=(p[n-1].bt/q)+1;
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
	int curr=0;
        for(j=0;j<m;j++)
        {
		for(i=0;i<n;i++)
		{
			if(p[i].bt>q)
			{
				if(p[i].c==0)
				{
				p[i].s = p[i].at;
				p[i].c=1;
				}
				p[i].bt= p[i].bt-q;
				curr+=q;
				if(p[i].bt==0)
					p[i].f = curr;
			}
			else
			{      if(p[i].bt!=0)
                               {
				curr +=p[i].bt;
                                p[i].bt=0;
                                p[i].f=curr;
                               }
			}
		}
	}
	
	printf("Process number\tBurst time\tWaiting time\tResponse time\tTurn-around time\n");        
	for(i=0;i<n;i++)
        {
         printf("%14d\t%10d\t%12d\t%13d\t%16d\n",p[i].id,p[i].temp,p[i].f-p[i].at-p[i].temp,p[i].s-p[i].at,p[i].f-p[i].at);
        }
}





/*
    OUTPUT:

[11311A12A8@itlab cn]$ ./a.out
enter the value of q 1
Enter the no. of processes: 5
Enter the burst time of process 1: 10
Enter the arrival time of the process 1: 2
Enter the burst time of process 2: 2
Enter the arrival time of the process 2: 1
Enter the burst time of process 3: 5
Enter the arrival time of the process 3: 0
Enter the burst time of process 4: 6
Enter the arrival time of the process 4: 4
Enter the burst time of process 5: 4
Enter the arrival time of the process 5: 3
processs number  Burst time      Waiting time    Response time   Turn-around time
             3           5                14                0                 19
             2           2                 4                0                  6
             1          10                15                0                 25
             5           4                10                0                 14
             4           6                13                0                 19
*/
