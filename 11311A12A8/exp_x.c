#include<stdio.h>
main()
{
        double x,sum=0,term=1; //declaring x
        int i=1; //initialising i
        printf("enter the value of x\n"); // user prompt
        scanf("%lf",&x);
        while(term>=0.0001)
        {
                sum+=term;              //calculation
                term*=(x/i);
                i++;
        }
        printf("exp(%lf)= %lf \n",x,sum);  //printing the expansion
        return 0;
}

