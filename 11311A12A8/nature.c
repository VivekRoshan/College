/*programme to find the nature of the roots*/
#include<stdio.h>
#include<math.h>
main()
{
int a,b,c,p;   //a,b,c are the coefficients of the quadratic equation 
float d,x1,x2;    //x1,x2 are the roots of the equation
printf("enter a,b,c values");  //enter the a,b,c values
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
p=2*a;
if(sqrt(d)==0)
{
printf("the roots are real and equal");    //the roots are real and equal
x1=x2=-b/p;
printf("roots are %f\t%f\t",x1,x2);
}
else if(sqrt(d)>0)
{
printf("the roots are real and distinct");  //the roots are real and distinct
x1=(-b+sqrt(d))/p;
x2=(-b-sqrt(d))/p;
printf("roots are %f\t%f\t",x1,x2);
}
else
{
printf("roots are complex and imaginary");  //roots are complex and imaginary
d=sqrt(-d);
x1=-b/p;
x2=abs(d/p);
printf("roots are %f+i%f\t %f-i%f\t",x1,x2,x1,x2);
}
return 0;
}

