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
        bal=value-depr;
 printf("%10d%10.2f%10.2f%10.2f\n");
        value=bal;
        }
}
void soyd(float value,int n)
{
        float depr,bal,df;
        int i;
       printf("      year     value      depr   balance\n");
       for(i=1;i<=n;i++)
       {
        df=(n-i+1)*2.0/(n*(n+1));
                                              df=(n-i+1)*2.0/(n*(n+1));
        depr=value*df;
        bal=value-depr;
        printf("%10d%10.2f%10.2f%10.2f\n");
        value=bal;
        }
}
int menu()
{
        int choice;
printf("1.straight line method\n");
        printf("2.double declining method\n");
        printf("3.sum of years digit method\n");
        printf("4.exit\n");
        scanf("%d",&choice);
	return choice;
}
main()
{

        float value;
        int life,option;
        while((option = menu())!=4)
        {
          printf("value of asset\n");
          scanf("%f",&value);
          printf("life of asset\n");
          scanf("%d",&life);

          switch(option)
          {
             case 1:stline(value,life);break;
             case 2:ddb(value,life);break;
	     case 3:soyd(value,life);break;
             default :printf("\n");
          }

 }
        return 0;
}

