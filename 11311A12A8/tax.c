#include<stdio.h>
main()
{
float salary,tax;
printf("enter the salary");
scanf("%f",&salary);
if(salary<=25000)
tax=250;
else
tax=500;
printf("the tax is %f/n",tax);
return 0;
}

