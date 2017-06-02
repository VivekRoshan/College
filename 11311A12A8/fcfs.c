#include<stdio.h>
#include<stdlib.h>

struct process
{
	int p,a,b;
};

int main()
{
	int n;
	struct process arr[100];
	printf("Enter the number of processes: ");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		int m,n,p;
		printf("Enter the process number: ");
		scanf("%d",&p);
		printf("Enter the arrival time: ");
		scanf("%d",&m);
		printf("Enter the burst time: ");
		scanf("%d",&n);
		arr[i].a = m;
		arr[i].b = n;
		arr[i].p = p;
	}
	int maxa,j;
	struct process temp;
	for(i=0;i<n;i++)
	{
		maxa = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[maxa].a>arr[j].a)
				maxa = j;
		}
		temp = arr[i];
		arr[i] = arr[maxa];
		arr[maxa] = temp;
	}
	int twait[100],tot[100];
	int curr = arr[0].a+arr[0].b;
	twait[0] = 0;
	for(i=1;i<n;i++)
	{
		if(curr-arr[i].a>0)
			twait[i]=curr-arr[i].a;
		else
			twait[i]=0;
		if(arr[i].a>curr)
			curr = arr[i].a;
		else
			curr += arr[i].b;
	}
	float wsum=0;
	for(i=0;i<n;i++)
	{
		wsum += twait[i];
		printf("The waiting time of process %d is %d\n",arr[i].p,twait[i]);
	}
	wsum /= n;
	printf("The average waiting time is: %f\n",wsum);
	return 0;
}
