/*PROGRAM TO IMPLEMENT DIJKSTRA ALGORITHM  */

#include<stdio.h>
void main(){
        struct arr{
                int path,w,sta,tr;
        };
        struct arr abc[30];
        int n,a[30][30],i,j,x,src=0,des=0,e=0,min=0,src1,des1;
        printf("Enter no of nodes in subnet:");
        scanf("%d",&n);
        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                        a[i][j]=0;
                }
        }
        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                        if(i==j)
                                a[i][j]=0;
                        else{
                                if(i>j){
                                        a[i][j]=a[j][i];
                                }
                                else{
                                printf("path from %d to %d:",i,j);
                                scanf("%d",&a[i][j]);
                                a[j][i]=a[i][j];
                                }
                        }
                }
                abc[i].w=0;
                abc[i].tr=0;
                abc[i].path=-1;
                abc[i].sta=1;
        }
  printf("\t");
        for(i=0;i<n;i++)
                printf("%d\t",i);
        printf("\n");
        for(i=0;i<n;i++){
                printf("%d\t",i);
                for(j=0;j<n;j++){
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
        }
        printf("Select the source from %d to %d:",0,n-1);
        scanf("%d",&src);
        while(1){
        if(src<0 & src >n-1){
                printf("node is not valid...pls select again:");
                scanf("%d",&src);
        }
        else break;
        }

        abc[src].sta=0;
 printf("select the destination from %d to %d other than %d:",0,n-1,src);
        scanf("%d",&des);

        src1=src;
        des1=des;
                printf("%d %d",src,des);
        abc[src].w=0;
        abc[src].path=src;
        while(src!=des){
                for(i=0;i<n;i++){
                        if(a[src][i]!=0 & abc[i].sta!=0){
				 if(abc[i].w==0){

                                        abc[i].w=a[src][i]+abc[src].w;
                                        abc[i].path=src;
                                }
                                else{if((a[src][i]+abc[src].w)<(abc[i].w)){

                                        abc[i].path=src;
                                        abc[i].w=abc[src].w+a[src][i];
                                        }    }
                        }
                }
                min=10000;
                for(i=0;i<n;i++){
                        if(abc[i].w!=0 & abc[i].sta!=0 & min>abc[i].w){
                                min=abc[i].w;
                                e=i;

                        }

                }

                src=e;
                abc[src].sta=0;

        }
        printf("\nthe shortest distance from %d to %d is:%d",src1,des1,abc[des1].w);
                e=des1;
                printf("\nthe shortest path is:%d",e);
                do{
                        e=abc[e].path;
                        printf("%d",e);
                }while(e!=src1);
}
/*output:
 * [11311A12A8@itlab ~]$ ./a.out
 * Enter no of nodes in subnet:5
 * path from 0 to 1:3
 * path from 0 to 2:4
 * path from 0 to 3:0
 * path from 0 to 4:2
 * path from 1 to 2:0
 * path from 1 to 3:14
 * path from 1 to 4:0
 * path from 2 to 3:2
 * path from 2 to 4:0
 * path from 3 to 4:15
 *         0       1       2       3       4
 *         0       0       3       4       0       2
 *         1       3       0       0       14      0
 *         2       4       0       0       2       0
 *         3       0       14      2       0       15
 *         4       2       0       0       15      0
 *         Select the source from 0 to 4:0
 *         select the destination from 0 to 4 other than 0:3
 *         0 3
 *         the shortest distance from 0 to 3 is:6
 *         the shortest path is:320*/                                                                     
