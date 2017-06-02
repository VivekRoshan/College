
#include<stdio.h>

void main()
{
int max[10][10],need[10][10],alloc[10][10],avail[10],completed[10],safe[10];
int p,r,i,j,process,count;
count = 0;
printf("\nEnter no of processes:");
scanf("%d",&p);
for(i=0;i<p;i++)
completed[i]=0;
printf("\nEnter no of resources:");
scanf("%d",&r);
printf("\nEnter max matrix for each process:");
for(i=0;i<p;i++)
{
printf("\nFor process %d:",i+1);
for(j=0;j<r;j++)
scanf("%d",&max[i][j]);
}
printf("\nEnter allocation matrix for each process:");
for(i=0;i<p;i++)
{
printf("\nFor process %d:",i+1);
for(j=0;j<r;j++)
scanf("%d",&alloc[i][j]);
}
printf("\nEnter available resources:");
for(i=0;i<r;i++)
scanf("%d",&avail[i]);
for(i=0;i<p;i++)
for(j=0;j<r;j++)
need[i][j]=max[i][j]-alloc[i][j];
do
{
printf("\nMax Matrix:\tAllocation Matrix:\n");
for(i=0;i<p;i++)
{
for(j=0;j<r;j++)
printf("%d ",max[i][j]);
printf("\t\t");
for(j=0;j<r;j++)
printf("%d ",alloc[i][j]);
printf("\n");
}
process=-1;
for(i=0;i<p;i++)
{
if(completed[i]==0)
{
process=i;
for(j=0;j<r;j++)
{
if(avail[j] < need[i][j])
{
process = -1;
}
}
}
if(process != -1)
break;
}
if(process != -1)
{
printf("\nProcess %d runs to completion",process+1);
safe[count]=process+1;
count++;
for(j=0;j<r;j++)
{
avail[j] += alloc[process][j];
printf("%d",avail[j]);
//alloc[process][j]=0;
//max[process][j]=0;
completed[process]=1;
} 
printf("\n");
}
}while(count!= p && process != -1);
printf("%d",count);
if(count == p)
{
printf("\nSystem is in a safe state\n");
printf("Safe sequence:<");
for(i=0;i<p;i++)
printf("%d",safe[i]);
printf(">\n");
}
else
printf("\nSystem is not in a safe state");
}

/*OUTPUT
 * [11311A12A8@itlab ~]$ gcc bankers.c
 * [11311A12A8@itlab ~]$ ./a.out
 *
 * Enter no of processes:10
 *
 * Enter no of resources:12
 *
 * Enter max matrix for each process:
 * For process 1:1
 * 2
 * 3
 * 4
 * 5
 * 6
 * 7
 * 8
 * 9
 * 0
 * 1
 * 2
 *
 * For process 2:2
 * 3
 * 4
 * 5
 * 6
 * 7
 * 8
 * 9
 * 0
 * 1
 * 2
 * 3
 *
 * For process 3:4
 * 5
 * 6
 * 7^Z
 * [1]+  Stopped                 ./a.out
 * [11311A12A8@itlab ~]$ gcc bankers.c
 * [11311A12A8@itlab ~]$ ./a.out
 *
 * Enter no of processes:3
 *
 * Enter no of resources:3
 *
 * Enter max matrix for each process:
 * For process 1:1
 * 2
 * 3
 *
 * For process 2:4
 * 5
 * 6
 *
 * For process 3:7
 * 8
 * 9
 *
 * Enter allocation matrix for each process:
 * For process 1:1
 * 2
 * 3
 *
 * For process 2:4
 *
 * 5
 * 6
 *
 * For process 3:7
 * 8
 * 9
 *
 * Enter available resources:1
 * 2
 * 3
 *
 * Max Matrix:     Allocation Matrix:
 * 1 2 3           1 2 3
 * 4 5 6           4 5 6
 * 7 8 9           7 8 9
 *
 * Process 1 runs to completion246
 *
 * Max Matrix:     Allocation Matrix:
 * 1 2 3           1 2 3
 * 4 5 6           4 5 6
 * 7 8 9           7 8 9
 *
 * Process 2 runs to completion6912
 *
 * Max Matrix:     Allocation Matrix:
 * 1 2 3           1 2 3
 * 4 5 6           4 5 6
 * 7 8 9           7 8 9
 *
 * Process 3 runs to completion131721
 * 3
 * System is in a safe state
 * Safe sequence:<123>
 */
