#include<stdio.h>
main()
{
float sales,commission;
printf("enter the sales of the day:");
scanf("%f",&sales);
if(sales<5000)
commission=sales*0.05;
else
commission=sales*0.08;
printf("the commission is %10.2f\n",commission);
return 0;
}

