/*                              SORTING
 * NANE:S.Vivek Roshan                                  ROLL:11311A12A8
 * CLASS:IT F2 */                                        
#include<stdio.h>
#include<stdlib.h>
void swap(int *x, int*y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}

void printArray(int *a, int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                printf("\t%5d\n",a[i]);
        }
}


void bubbleSort(int *a, int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=n-1;j>=i;j--)
			if(a[j]>a[j+1])
			{
			   swap(&a[j],&a[j+1]);
			}
        printArray(a,n);

}

void selectionSort(int *a, int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
                for(j=i+1;j<n;j++)
                        if(a[i]>a[j])
                        {
                           swap(&a[i],&a[j]);
                        }

        printArray(a,n);

}
void insertionSort(int *a, int n)
{
	int i,j,k,x;
        for(j=1;j<n;j++)
	{
		x=a[j];
		i=0;
		while(x>a[i++])
			if(i>j)
				break;	
		i--;
		if(i<j)
		{
	                for(k=j;k>i;k--)
				a[k]=a[k-1];
			a[i]=x;
		}
	}
        printArray(a,n);

}

void quickSort(int *a, int left, int right)
{
	int i,last,n;
	if(left<right)
	{
		swap(&a[left],&a[(left+right)/2]);
		last=left;
		for(i=left+1;i<=right;i++)
			if(a[i]<a[left])
				swap(&a[++last],&a[i]);                         			swap(&a[left],&a[last]);
			quickSort(a,left,last-1);
                        quickSort(a,last+1,right);


	}
}

int *mergeTwo(int *a, int m,int *b, int n)
{
	int i=0,j=0,k=0,*c;
	c=(int*)malloc((m+n)*sizeof(int));
	while(1)
	{
		if(a[i]<b[j])
			c[k++]=a[i++];
                else
                        c[k++]=b[j++];
		if(i==m)
		{
			while(j<n)
                             c[k++]=b[j++];
			break;
		}
                if(j==n)
                {
                        while(i<m)
                             c[k++]=a[i++];
                        break;
                }

	}
	return c;
}

void mergeOne(int *a, int left, int mid, int right)
{
	int *u,*v,*w,i,j,k,m,n;
	m=mid-left+1;
	n=right-mid;
        u=(int*)malloc(m*sizeof(int));
        v=(int*)malloc(n*sizeof(int));
        w=(int*)malloc((m+n)*sizeof(int));
	k=left;
	for(i=0;i<m;i++)
		u[i]=a[k++];
        k=mid+1;
        for(i=0;i<m;i++)
                v[i]=a[k++];
	w=mergeTwo(u,m,v,n);
        k=left;
        for(i=0;i<m+n;i++)
                a[k++]=w[i];
	
}


void mergeSort(int *a, int left, int right)
{
	int mid,n;
	if(left<right)
	{
		mid=(left+right)/2;
		mergeSort(a,left,mid);
                mergeSort(a,mid+1,right);
                mergeOne(a,left,mid,right);
	}

}
	
int *readArray(int n)
{
	int i;
	int *a;
        a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter the %d element:",i);
		scanf("%d",&a[i]);
	}
	return a;
}

int menu()
{
	int choice;
	printf("enter choice: ");
	printf("\n\t1.Bubble sort\n\t2.Selection sort\n\t3.Insertion sort\n\t4.Merge sort\n\t5.Quick sort\n\t6.Exit\n");
	
	scanf("%d",&choice);
	
	return choice;
}

int main()
{
	int ch,*a,n;
	printf("enter no of elements: ");
	scanf("%d",&n);
	a=readArray(n);
	while((ch=menu())!=6)
	{
	switch(ch)
	{
		case 1: bubbleSort(a,n);break;
		case 2: selectionSort(a,n);break;
		case 3: insertionSort(a,n);break;
		case 4: mergeSort(a,0,n-1);
			printArray(a,n);break;
		case 5: quickSort(a,0,n-1);
			printArray(a,n);break;
		case 6: printf("\n");break;
		default: printf("illegal choice");
	}
	}
	return 0;
}





/*              OUTPUTS
[11311A12A8@itlab sorting]$ gcc sorting.c
[11311A12A8@itlab sorting]$ ./a.out
enter no of elements: 7
enter the 0 element:7
enter the 1 element:5
enter the 2 element:3
enter the 3 element:9
enter the 4 element:33
enter the 5 element:44
enter the 6 element:11
enter choice:
        1.Bubble sort
        2.Selection sort
        3.Insertion sort
        4.Merge sort
        5.Quick sort
        6.Exit
1
            3
            5
            7
            9
           11
           33
           44
enter choice:
        1.Bubble sort
        2.Selection sort
        3.Insertion sort
        4.Merge sort
        5.Quick sort
        6.Exit
2
            3
            5
            7
            9
           11
           33
           44
enter choice:
        1.Bubble sort
        2.Selection sort
        3.Insertion sort
        4.Merge sort
        5.Quick sort
        6.Exit
3
            3
            5
            7
            9
           11
           33
           44
enter choice:
        1.Bubble sort
        2.Selection sort
        3.Insertion sort
        4.Merge sort
        5.Quick sort
        6.Exit
4
            3
            5
            7
            9
           11
           33
           44
enter choice:
        1.Bubble sort
        2.Selection sort
        3.Insertion sort
        4.Merge sort
        5.Quick sort
        6.Exit
5
            3
            5
            7
            9
           11
           33
           44
enter choice:
        1.Bubble sort
        2.Selection sort
        3.Insertion sort
        4.Merge sort
        5.Quick sort
        6.Exit
6
[11311A12A8@itlab sorting]$
*/
