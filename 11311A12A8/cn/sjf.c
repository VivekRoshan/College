#include<stdio.h>
#include<string.h>
void main()
{
int process[10],wtime[10],ptime[10],temp,ptemp,total=0,tat[10],n,i,j;
float avg=0;
printf("enter no process\n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
        printf("enter process  ID:",i+2);
        scanf("%d",&process[i]);
        printf("Enter process  btime:",i+1);
        scanf("%d",&ptime[i]);
}
for(i=0;i<n-1;i++)
{
        for(j=i+1;j<n;j++)
        {
                if(ptime[i]>ptime[j])
                {
                        temp=ptime[i];
                        ptime[i]=ptime[j];
                        ptime[j]=temp;
                        temp=process[i];
                        process[i]=process[j];
                        process[j]=temp;
                }
        }
}
wtime[0]=0;
for(i=1;i<n;i++)
{
        wtime[i]=wtime[i-1]+ptime[i-1];
        tat[i]=wtime[i-1]+ptime[i-1];
        total=total+wtime[i];
}
avg=total/n;
printf("\np_id\t w_time\t p_time\n tat\n");
for(i=0;i<n;i++)
printf("%d\t %d\t %d\t %d\n",process[i],wtime[i],ptime[i],tat[i]);
printf(" total wating time:%d \n avg waiting time:%f",total,avg);
}
