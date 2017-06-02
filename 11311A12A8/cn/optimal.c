/* PROGRAM O IMPLEMET FIRST IN OPTIMAL PAGE REPLACEMENT ALGORITHM */

#include<stdio.h>
void main()
{
        int n1,i,pf=0,m=0,f1,f2,f3,count=0;
        printf("enter the no of pages:");
        scanf("%d",&n1);
        int f[3],rs[n1];
        for(i=0;i<n1;i++)
        {
        printf("enter the page(1 TO 10) %d: ",i+1);
        scanf("%d",&rs[i]);
        }
        printf("frame1     frame2     frame3     pagefaults\n");
        f[0]=rs[0];
        pf++;
        f1=++m;
        printf("%d           0          0         %d\n",f[0],pf);
        f[1]='\0';
        f[2]='\0';
        for(i=1;i<n1;i++)
        {
                if((f[1]=='\0')&&(f[0]!=rs[i]))
                {
                        f[1]=rs[i];
                        pf++;
                        f2=++m;
                        printf("%d           %d          0         %d\n",f[0],f[1],pf);
                }
                else if((f[2]=='\0')&&(f[0]!=rs[i])&&(f[1]!=rs[i]))
                {
                        f[2]=rs[i];
                        pf++;
                        f3=++m;
                        printf("%d            %d          %d         %d\n",f[0],f[1],f[2],pf);
                }
                else if((rs[i]!=f[0])&&(rs[i]!=f[1])&&(rs[i]!=f[2]))
                {                  
			int n[]={0,0,0};
			int k,l,j;
			for(k=0;k<3;k++)
			{
				for(j=i+1;j<n1;j++)
				{
					if((n[k]==0)&&(rs[j]==f[k]))
					{
						n[k]=j;
					}
				}
				if(n[k]==0)
					count++;
					
			}
			if(count==3)
			{
				if((f1>f2)&&(f1>f3))
    					l=0;
                        	else if((f2>f3)&&(f2>f1))
					l=1;
                        	else
                                	l=2;
			}
			else if(n[0]==0)
			{
				if(n[1]==0)
					l=f1<f2?0:1;
				else if(n[2]==0)
					l=f1<f3?0:2;
				else
					l=0;
					
                	}	
                 	else if(n[1]==0)
			{
				if(n[2]==0)
					l=f2<f3?1:2;
				else
					l=1;
			}
			else
				l=2;
			 if(l==0)
                                        f1=++m;
                                else if(l==1)
                                        f2=++m;
                                else
                                        f3=++m;

			f[l]=rs[i];
                        pf++;
                       	printf("%d            %d          %d         %d\n",f[0],f[1],f[2],pf);

		}
		else
            	{
                        printf("%d            %d          %d         %d\n",f[0],f[1],f[2],pf);
                        if(f[0]==rs[i])
                                f1=++m;
                        else if(f[1]==rs[i])
                                f2=++m;
                        else
                                f3=++m;
             	}
			
      }
     printf("enter the no of page faults : %d",pf);
}
/*output:
 * [11311A12A8@itlab ~]$ gcc optimal.c
 * [11311A12A8@itlab ~]$ ./a.out
 * enter the no of pages:12
 * enter the page(1 TO 10) 1: 1
 * enter the page(1 TO 10) 2: 2
 * enter the page(1 TO 10) 3: 3
 * enter the page(1 TO 10) 4: 4
 * enter the page(1 TO 10) 5: 1
 * enter the page(1 TO 10) 6: 2
 * enter the page(1 TO 10) 7: 5
 * enter the page(1 TO 10) 8: 1
 * enter the page(1 TO 10) 9: 2
 * enter the page(1 TO 10) 10: 3
 * enter the page(1 TO 10) 11: 4
 * enter the page(1 TO 10) 12: 5
 * frame1     frame2     frame3     pagefaults
 * 1            0          0         1
 * 1            2          0         2
 * 1            2          3         3
 * 1            2          4         4
 * 1            2          4         4
 * 1            2          4         4
 * 1            2          5         5
 * 1            2          5         5
 * 1            2          5         5
 * 3            2          5         6
 * 3            4          5         7
 * 3            4          5         7
 * enter the no of page faults : 7
 */

