#include<stdio.h>
main()
{
float r,v,s;
printf("enter the radius");
scanf("%f",&r);
v=4.0/3*22.0/7*r*r*r;
s=4*22.0*r*r;
printf("volume and surface area is %f%f",v,s);
return 0;
}
