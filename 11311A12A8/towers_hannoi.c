#include<stdio.h>
void transfer(char source, char target, char auxiliary,int n)
{
    if(n>0)
    {
        transfer(source,auxiliary,target,n-1);
        printf("move %d - disc from %c to %c \n",n,source,target);
        transfer(auxiliary,target,source,n-1);
    }
}
main()
{
    int n,A,B,C;
    printf("enter n value: \n");
    scanf("%d",&n);
    transfer('A','B','C',n);
    return 0;
}

