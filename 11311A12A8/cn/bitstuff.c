#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr1[50]={0,1,1,1,1,1,1,0},arr2[50]={0,1,1,1,1,1,1,0},arr3[8]={0,1,1,1,1,1,1,0};
	int i=8,j=8;
	int a,b,n;
	printf("Enter the size of the message: ");
	scanf("%d",&n);
	char k[50]={0};
        scanf("%s",&k);
	for(a=0;a<n;a++)
	{
		int m;
		if(k[a]=='1')
			m = 1;
		else
			m = 0;
		arr1[a+i] = m;	
	}
	printf("After stuffing\n");
	int count=0;
	for(a=0;a<n;a++)
	{
		if(arr1[i]!=1 && count!=5)
		{
			arr2[j]=arr1[i];
			i++;
			j++;
		}
		else if(arr1[i]==1 && count!=5)
		{
			arr2[j]=arr1[i];
			i++;
			j++;
			count++;
		}
		else
		{
			count=0;
			arr2[j]=0;
			j++;
			arr2[j]=arr1[i];
			if(arr1[i]=='1')
				count++;
			i++;
			j++;
		}
	}
	int v;
	
	for(a=0;a<8;a++)
	{
		arr2[j] = arr3[a];
		j++; 
	}
	
	for(v=0;v<n+17;v++)
        {
                printf("%d",arr2[v]);
        }
	printf("\n");
	printf("De-stuffing\n");
	int arr4[50]={0};
	int g;

	i=8;
	j=0;
	count =0;
	for(a=0;a<n;a++)
	{
		 if(arr2[i]!=1 && count!=5)
                {
                        arr4[j]=arr2[i];
                        i++;
                        j++;
                }
                else if(arr2[i]==1 && count!=5)
                {
                        arr4[j]=arr2[i];
                        i++;
                        j++;
                        count++;
                }
                else
                {
                        count=0;
                        i++;
			arr4[j]=arr2[i];
			if(arr2[i]=='1')
				count++;
			i++;
			j++;
                }
	}
	for(a=0;a<n;a++)
	{
		printf("%d",arr4[a]);
	}
	printf("\n");
	return 0;
}

/*
Output-
Enter the size of the message: 5
11111
After stuffing
0111111011111001111110
De-stuffing
11111
*/

