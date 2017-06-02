#include<stdio.h>
main()
{
   int n;
   printf("enter n value: \n");
   scanf("%d",&n);
   float x[n],mean,sum=0,sqsum=0,variance;
   int i;
   for(i=0;i<n;i++)
   {
       printf("enter x[%d]:\n",i);
       scanf("%f",&x[i]);
       sum=sum+x[i];
   }
   mean=sum/n;
   for(i=0;i<n;i++)
   {
      sqsum=sqsum+(x[i]-mean)*(x[i]-mean);
   }
   variance=sqsum/n;
   printf("mean is %.2f and variance is %.2f",mean,variance);
   return 0;
}

