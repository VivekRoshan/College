
#include<stdio.h>
int main()
{
    int p1[10],p2[10],k1[10],k2[10],ip[10],fp[10],ep[10],plt[10],ct[10],s0[6][6],s1[6][6],ict[10],sw[10],afp[10],afep[10];
    int i,j,k,s,d;
    int sp1[10],sp2[10];
    printf("Enter the 8 bit cipher text:\n");
    for(i=0;i<8;i++)
          scanf("%d",&plt[i]);
    printf("Enter key1 \n");
    for(i=0;i<8;i++)
        scanf("%d",&k1[i]);
     printf("Enter key2 \n");
      for(i=0;i<8;i++)
               scanf("%d",&k2[i]);
      printf("Enter 8 bit initial permutation\n");
      for(i=0;i<8;i++)
          scanf("%d",&ip[i]);
      for(i=0;i<8;i++)
          afp[i]=plt[ip[i]];
      
     for(i=0;i<4;i++)
         p1[i]=afp[i];
     for(i=0;i<4;i++)
         p2[i]=afp[4+i];
     printf("Enter the expansion permutaion:\n");
for(i=0;i<8;i++)
     scanf("%d",&ep[i]);
     for(i=0;i<8;i++)
         afep[i]=p2[ep[i]];
     for(i=0;i<8;i++)
         afep[i]=afep[i]^k2[i];
     for(i=0;i<4;i++)
             sp1[i]=afep[i];
     for(i=0;i<4;i++)
             sp2[i]=afep[4+i];
     printf("\n\n enter the s-box0 matrix:\n ");
     for(i=0;i<4;i++)
     {
         for(j=0;j<4;j++)
             scanf("%d",&s0[i][j]);
     }
     printf("\n\n enter the s-box1 matrix:\n ");
     for(i=0;i<4;i++)
     {
             for(j=0;j<4;j++)
                         scanf("%d",&s1[i][j]);
     }
     int cr1[4],cr2[4],bp4[4],perp4[4];
     int q,w,e,r;
     cr1[0]=sp1[0];
     cr1[1]=sp1[3];
     cr1[2]=sp1[1];
     cr1[3]=sp1[2];
     s=cr1[1]+(cr1[0]*2);
     d=cr1[3]+(cr1[2]*2);
     q=s0[s][d];
     if(q==0)
     {
         bp4[0]=0;
         bp4[1]=0;
     }
     else if(q==1)
     {
         bp4[0]=0;
         bp4[1]=1;
     }
     else if(q==2)
     {
             bp4[0]=1;
             bp4[1]=0;
     }
     else
     {
             bp4[0]=1;
             bp4[1]=1;
     }
     cr2[0]=sp2[0];
     cr2[1]=sp2[3];
     cr2[2]=sp2[1];
     cr2[3]=sp2[2];
     s=cr2[1]+(cr2[0]*2);
     d=cr2[3]+(cr2[2]*2);
     q=s1[s][d];
     if(q==0)
     {
             bp4[2]=0;
                 bp4[3]=0;
     }
     else if(q==1)
     {
             bp4[2]=0;
             bp4[3]=1;
     }
     else if(q==2)
     {
             bp4[2]=1;
             bp4[3]=0;
     }
     else
     {
             bp4[2]=1;
             bp4[3]=1;
     }
int ibp4[4];
for(i=0;i<4;i++)
	ibp4[i]=bp4[i];
     printf("Enter permutation p4:\n");
     for(i=0;i<4;i++)
         scanf("%d",&perp4[i]);
     for(i=0;i<4;i++)
     bp4[i]=ibp4[perp4[i]];
     for(i=0;i<4;i++)
         sw[i]=p2[i];
     for(i=0;i<4;i++)
         sw[4+i]=p1[i]^bp4[i];
for(i=0;i<8;i++)
printf("\n%d\n",sw[i]);
     for(i=0;i<4;i++)
         p2[i]=sw[4+i];
     for(i=0;i<4;i++)
         p1[i]=sw[i];
     for(i=0;i<8;i++)
             afep[i]=p2[ep[i]];
     for(i=0;i<8;i++)
             afep[i]=afep[i]^k1[i];
     for(i=0;i<4;i++)
                 sp1[i]=afep[i];
     for(i=0;i<4;i++)
                 sp2[i]=afep[4+i];
     cr1[0]=sp1[0];
     cr1[1]=sp1[3];
     cr1[2]=sp1[1];
     cr1[3]=sp1[2];
    s=cr1[1]+(cr1[0]*2);
    d=cr1[3]+(cr1[2]*2);
    q=s0[s][d];
    if(q==0)
    {
        bp4[0]=0;
        bp4[1]=0;       
    }
     else if(q==1)
     {
        bp4[0]=0;
        bp4[1]=1;     
     }
      else if(q==2)
        {
            bp4[0]=1;
            bp4[1]=0;
        }
       else
       {
                bp4[0]=1;
                bp4[1]=1;     
       }
       cr2[0]=sp2[0];
       cr2[1]=sp2[3];
       cr2[2]=sp2[1];
       cr2[3]=sp2[2];
       s=cr2[1]+(cr2[0]*2);
       d=cr2[3]+(cr2[2]*2);
       q=s1[s][d];
       if(q==0)
       {
           bp4[2]=0;
           bp4[3]=0;
       }
       else if(q==1)
       {
           bp4[2]=0;
           bp4[3]=1;
       }
       else if(q==2)
       {
           bp4[2]=1;
           bp4[3]=0;
       }
       else
       {
           bp4[2]=1;
           bp4[3]=1;
       }
for(i=0;i<4;i++)
	ibp4[i]=bp4[i];
       for(i=0;i<4;i++)
           bp4[i]=ibp4[perp4[i]];
       for(i=0;i<4;i++)
           ict[i]=bp4[i]^p1[i];
       for(i=0;i<4;i++)
           ict[4+i]=p2[i];
       printf("Enter final permutation\n");
       for(i=0;i<8;i++)
           scanf("%d",&fp[i]);
       for(i=0;i<8;i++)
           ct[i]=ict[fp[i]];
       printf("\n\nOriginal 8 bit plain text is :\n");
       for(i=0;i<8;i++)
           printf("%d",ct[i]);
       return 0;
}

/*OUTPUT
 [11311A12A8@itlab ~]$ gcc cipher.c
[11311A12A8@itlab ~]$ ./a.out
Enter the 8 bit cipher text:
1 1 1 1 0 0 1 1
Enter key1
0 1 0 0 1 1 1 1
Enter key2
1 1 1 1 1 1 0 0
Enter 8 bit initial permutation
6 0 4 1 7 3 5 2
Enter the expansion permutaion:
2 0 3 1 3 0 1 2


 enter the s-box0 matrix:
 1 0 3 2 3 2 1 0 0 2 1 3 3 1 0 2


 enter the s-box1 matrix:
 0 1 2 3 2 0 1 3 3 0 1 2 2 1 0 3
Enter permutation p4:
3 1 2 0
After round 1 and after swapping
0

1

0

1

0

1

0

1
Enter final permutation
1 3 7 5 2 6 0 4
#1#1#0#1#1#1#0#1

Original plain text is :
11110000
*/
