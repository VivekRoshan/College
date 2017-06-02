#include<stdio.h>
#include<stdlib.h>

int min(int* a,int f)
{
int temp,i,j=0;
temp=a[0];
for(i=1;i<f;i++)
	{
	if(temp>a[i] && a[i]!=0)
	{
		temp=a[i];
		j=i;
	}		
	else if(a[i]==0)
	{
		j=i;
		return j;
	} 
	}
return j;
}

int ind(int *a,int f,int n)
{
	int i;
	for(i=0;i<f;i++)
		if(a[i]==n)
			return i;
}
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
	int a[20],b[20],c[20],i,r,n,m;
	int temp,j,f,faults=0;
	printf("enter the size of the reference string\n");
	scanf("%d",&n);
	printf("enter the number of frames");
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
	for(i=0;i<f;i++)
        {
        c[i]=0;
        }
	//int k=1;
	b[0]=a[0];
	int t=1;
	c[0]=t++;
	faults++;
	print(b,f);
	for(i=1;i<n;i++)
	{
		if((checking(b,f,a[i]))==0)
		{	
			m=min(c,f);
			faults++;
			b[m]=a[i];
			c[m]=t++;
			//k++;
			//print(b,f);
		}
		else
		{
			m= ind(b,f,a[i]);
			c[m]=t++;
			//print(b,f);
			
		}
		print(b,f);
	 }
	printf("the number of page faults are %d \n",faults);
	
			
}	



/*
[11311A12A8@itlab cn]$ ./a.out
enter the size of the reference string
20
enter the number of frames4
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
3 0 4 2
3 0 4 2
3 0 4 2
3 0 4 2
3 0 4 2
3 0 4 2
3 0 1 2
3 0 1 2
3 0 1 2
3 0 1 2
7 0 1 2
7 0 1 2
7 0 1 2
the number of page faults are 8
*/
