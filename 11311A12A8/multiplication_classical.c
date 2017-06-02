/*Finding the product of 2 numbers in a classical way
 *   class: F-2*/
#include<stdio.h>
int main()
{
        int i,md,q,mr,r,pp,sum=0,count=0;               //declaring variables
        printf("enter 2 numbers:");
        scanf("%d%d",&md,&mr);                  //user prompt
        printf("%16d\n",md);
        printf("x%15d\n",mr);
        printf("----------------\n");
        q=mr;
        while(q)
        {
           r=q%10;                              //multiplying the given numbers
           pp=md*r;
           for(i=1;i<=count;i++)
                pp*=10;
           printf("%16d\n",pp);
           sum+=pp;
           q/=10;
           count++;
        }
        printf("----------------\n");
        printf("%16d\n",sum);           //printing the products of 2 numbers
        printf("----------------\n");
        return 0;
}

