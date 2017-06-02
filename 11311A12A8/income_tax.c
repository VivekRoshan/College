#include<stdio.h>
main()
{
int i;
float tax;
printf("enter the income");
scanf("%d",i);
if(i<50000)
printf("no tax");
else if(i>50000 && i<100000)
{
tax=(i-50000)*10/100;
printf("tax is %f\n",tax);
}
else if(i>100000 && i<200000)
{
tax=(i-100000)*20/100+5000;
printf("tax is %f\n",tax);
}
else if(i>200000 && i<300000)
{
tax=(i-200000)*30/100+25000;
printf("tax is %f\n");
}
else if(i>300000)
{
tax=(i-300000)+0.3*tax;
printf("tax is %f",tax);
}
return 0;
}


