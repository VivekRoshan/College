#include<stdio.h>
#include<stdlib.h>

int checking(int* a,int f,int n)
{
	int i;
	for(i=0;i<f;i++)
	{
		if(a[i]==n)
			return 1;
	}
	return 0;
}
void print(int* b,int f)
{
	int i;
	for(i=0;i<f;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
}
main()
{
	int a[20],b[20],i,r,n;
	int temp,j,f,faults=0;
	printf("enter the size of the reference string\n");
	scanf("%d",&n);
	printf("enter the number of frames\n");
	scanf("%d",&f);
	printf("enter the reference string\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		a[i]=temp;
	}
	for(i=0;i<f;i++)
	{
	b[i]=-1;
	}
	int k=1;
	b[0]=a[0];
	faults++;
	print(b,f);
	for(i=1;i<n;i++)
	{
		if((checking(b,f,a[i]))==0)
		{
			faults++;
			b[k%f]=a[i];
			k++;
			print(b,f);
		}
		else
		{
			print(b,f);
		}
	 }
	printf("the number of page faults are %d \n",faults);
	
			
}
/*
OUTPUT:
[11311A12A8@itlab cn]$ gcc page_fcfs.c
[11311A12A8@itlab cn]$ ./a.out	
enter the size of the reference string
20
enter the number of frames
4
enter the reference string
7
0
1
2
0
3
0
4
2
3
0
3
2
1
2
0
1
7
0
1
7 -1 -1 -1
7 0 -1 -1
7 0 1 -1
7 0 1 2
7 0 1 2
3 0 1 2
3 0 1 2
3 4 1 2
3 4 1 2
3 4 1 2
3 4 0 2
3 4 0 2
3 4 0 2
3 4 0 1
2 4 0 1
2 4 0 1
2 4 0 1
2 7 0 1
2 7 0 1
2 7 0 1
the number of page faults are 10
*/
