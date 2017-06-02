#include<stdio.h>
main()
{
        int n,i,j,count;
                printf("enter how many numbers you want to print:");
                scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                count=0;
        for(j=1;j<=i;j++)
        {
                if(i%j==0)
                        count++;
        }
                if(count==2)
                        printf("%d\n",i);

        }
        return 0;
}

