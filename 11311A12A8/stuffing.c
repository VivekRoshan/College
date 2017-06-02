#include<stdio.h>
main()
{
int n[8]={0,1,1,1,1,1,1,0};
int a[100];
int l,v;
printf("enter v");
scanf("%d",&v);
for(l=0;l<v;l++)
{
	scanf("%d",&a[l]);
}
int j,i,t;
int s[100];

int c=0;
for(j=0;j<8;j++)
{
	s[j]=n[j];
}
j++;
for(i=0;i<v;i++)
{	
	if(a[i]==1)
        {
             c++;
                     if(c==6)
                      { 
                       s[j++]=0;
			c=0;
                        
                      }

            
        }
        else{
             c=0;
          }
          s[j++]=a[i];
 	  
}
int o;
for(o=j,i=0;o<j+8;o++,i++)
{
        s[o]=n[i];
}
printf("/n");
for(t=0;t<j+8;t++)
{
	printf("%d",s[t]);
}
}
