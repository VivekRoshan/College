#include<stdio.h>
int c(int n,int r)
{
    if(r==0||n==r)
       return 1;
    return (c(n-1,r)+c(n-1,r-1));
}
main()
{
     int m,n,r,k;
     printf("enter m value: \n");
     scanf("%d",&m);
     k=0;
     for(n=0;n<=m;n++)
     {
         for(r=0;r<=m-k;r++)
            printf("  ");
         for(r=0;r<=n;r++)
         {
             printf("%6d",c(n,r));
         }
         putchar('\n');
         k++;
  }
    return 0;
}

