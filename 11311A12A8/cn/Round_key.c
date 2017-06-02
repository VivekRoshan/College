#include<stdio.h>
#include<math.h>
/*int r[10];
void permutation(int a[n],int p[n],int n)
{
	for(i=0;i<n;i++)
	{
		r[i]=a[p[i]];
	}
}
void circularleft(int k[n],int n)
{
	int i=0;
	int a=k[0];
	for(i=0;i<n;i++)
	{
		k[i]=k[i+1];
	}
	k[n]=a;
}*/	
main()
{
	int i,tempk[10],t=0,k8[8],k82[8],ip[10],k[10],k1[8],k2[8];
	int a,n1,n2,p8[8],tempk1[10];
	printf("Enter the 10 bit key : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&k[i]);
	}
	printf("Enter the Initial Permutation :\n "); 
	for(i=0;i<10;i++)
	{
		scanf("%d",&ip[i]);
	}
	for(i=0;i<10;i++)
	{
		tempk[i]=k[ip[i]];
		tempk1[i]=k[ip[i]];
	}
	a=tempk[0];
	for(i=0;i<4;i++)
		tempk[i]=tempk[i+1];
	tempk[4]=a;
	a=tempk[5];
	for(i=5;i<9;i++)
		tempk[i]=tempk[i+1];
	tempk[9]=a;
	printf("enter the indexes to be removed : ");
	scanf("%d%d",&n1,&n2);
	for(i=0;i<n1;i++)
	{
		k8[t]=tempk[i];
		t++;
	}
	for(i=n1+1;i<n2;i++)
	{
		k8[t]=tempk[i];
		t++;
	}
	for(i=n2+1;i<10;i++)
	{
		k8[t]=tempk[i];
		t++;
	}
	printf("Enter the 8 bit permutation: ");
	for(i=0;i<8;i++)
	scanf("%d",&p8[i]);
	for(i=0;i<8;i++)
                k1[i]=k8[p8[i]];
	for(i=0;i<8;i++)
	k1[i]=k8[p8[i]];
	
	//for 2nd key
	a=tempk1[0];
        for(i=0;i<4;i++)
                tempk1[i]=tempk1[i+1];
        tempk1[4]=a;
	a=tempk1[0];
        for(i=0;i<4;i++)
                tempk1[i]=tempk1[i+1];
        tempk1[4]=a;
	a=tempk1[0];
        for(i=0;i<4;i++)
                tempk1[i]=tempk1[i+1];
        tempk1[4]=a;

        a=tempk1[5];
        for(i=5;i<9;i++)
                tempk1[i]=tempk1[i+1];
        tempk1[9]=a;
	a=tempk1[5];
        for(i=5;i<9;i++)
                tempk1[i]=tempk1[i+1];
        tempk1[9]=a;
	a=tempk1[5];
        for(i=5;i<9;i++)
                tempk1[i]=tempk1[i+1];
        tempk1[9]=a;
	
	for(i=0;i<n1;i++)
        {
                k82[t]=tempk1[i];
                t++;
        }
        for(i=n1+1;i<n2;i++)
        {
                k82[t]=tempk1[i];
                t++;
        }
        for(i=n2+1;i<10;i++)
        {
                k82[t]=tempk1[i];
                t++;
        }


	for(i=0;i<8;i++)
		k2[i]=k82[p8[i]];
	
	
	printf("key1 is : \n ");	
	for(i=0;i<8;i++)
	{
		printf("%d",k1[i]);
	}
	printf("key1 is : \n ");
        for(i=0;i<8;i++)
        {
                printf("%d",k2[i]);
        }
}
