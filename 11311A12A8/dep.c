#include<stdio.h>
void stline(float value,int n)
{
       float depr,bal;int i;
       depr=value/n;
       printf("      year     value      depr   balance\n");
       for(i=1;i<=n;i++)
       {
        bal=value-depr;
        printf("%10d%10.2f%10.2f%10.2f\n");
        value=bal;
        }
}
void ddb(float value,int n)
{
        float depr,bal,df;
        int i;
        df=2.0/n;
      printf("      year     value      depr   balance\n");
       for(i=1;i<=n;i++)
       {
        depr=value*df;
        bal=value-depr;}
void soyd(float value,int n)
{
        float depr,bal,df;
        int i;
       printf("      year     value      depr   balance\n");
       for(i=1;i<=n;i++)
       {
        df=(n-i+1)*2.0/(n*(n+1));
depr=value*df;
        bal=value-depr;
        printf("%10d%10.2f%10.2f%10.2f\n");
  






                                                
