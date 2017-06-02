#include<stdio.h>
#include<stdlib.h>

int **createMat(int m,int n)
{
        int **M,i;
        M = (int**)malloc((m+1)*sizeof(int*));
        for(i=0;i<=m;i++)
                M[i]=(int*)malloc((n+1)*sizeof(int*));
        M[0][1]=m;
        M[1][0]=n;
        return M;
}
void readMat(int **M)
{
        int m,n,i,j;
        m= M[0][1];
        n= M[1][0];
        for(i=1;i<=m;i++)
        {
                printf("Enter %d elements of row %d",n,i);
                for(j=1;j<=n;j++)
                        scanf("%d",&M[i][j]);
        }
}
void displayMat(int **M)
{
        int m,n,i,j;
        m = M[0][1];
        n = M[1][0];
        for(i=1;i<=m;i++)
        {
                for(j=1;j<=n;j++)
                        printf("%4d",M[i][j]);
                putchar('\n');
        }
}
int **addMat(int **A,int **B)
{
        int **M,m1,n1,m2,n2,i,j;
        m1= A[0][1];
        n1= A[1][0];
        m2= B[0][1];
        n2= B[1][0];
        if((m1==m2) && (n1==n2))
        {
                M = createMat(m1,n1);
                for(i=1;i<=m1;i++)
                        for(j=1;j<=n1;j++)
                                M[i][j] = A[i][j]+B[i][j];
                return M;
        }
        else
        {
                printf("\n Error: Matrices cannot be added\n\n");
                return A;
        }
}
int **negateMat(int **A)
{
        int **M,m,n,i,j;
        m= A[0][1];
        n= A[1][0];
        M= createMat(m,n);
        for(i=1;i<=m;i++)
                for(j=1;j<=n;j++)
                        M[i][j] = -A[i][j];
        return M;
}
int** subtractMat(int **A,int **B)
{
        return(addMat(A,negateMat(B)));
}
int **multiplyMat(int **A,int **B)
{
        int **M,m1,n1,m2,n2,i,j,k;
        m1= A[0][1];
        n1= A[1][0];
        m2= B[0][1];
        n2= B[1][0];
        if(n1==m2)
        {
                M= createMat(m1,n2);
                for(i=1;i<=m1;i++)
                        for(j=1;j<=n2;j++)
                        {
                                M[i][j] = 0;
                                for(k=1;k<=n1;k++)
                                        M[i][j]+= A[i][k]* B[k][j];
                        }
                return M;
        }
        else
        {
                printf("Error: Matrices cannot be multiplied\n");
                return A;
        }
}
int **transposeMat(int **A)
{
        int **M,i,j,m,n;
        n=A[0][1];
        m=A[1][0];
        M= createMat(n,m);
        for(i=1;i<=n;i++)
                for(j=1;j<=m;j++)
                        M[i][j]= A[j][i];
        return M;
}
int menu()
{
        int q;
        printf("\t1.Matrix addition\n");
        printf("\t2.Matrix subtraction\n");
        printf("\t3.Matrix multiplication\n");
        printf("\t4.Matrix transpose\n");
        printf("\t5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&q);
        return q;
}
int main()
{
        int **A,**B,**C,q,m,n;
        while((q=menu())!=5)
        {
                switch(q)
                {
                        case 1: printf("The first matrix:\n");
                                printf("The no. of rows: ");
                                scanf("%d",&m);
                                printf("The number of coloumns: ");
                                scanf("%d",&n);
                                A = createMat(m, n);
                                readMat(A);

                                printf("The Second matrix:\n");
                                printf("The no. of rows: ");
                                scanf("%d",&m);
                                printf("The number of coloumns: ");
                                scanf("%d",&n);
                                B = createMat(m, n);
                                readMat(B);
                                C= addMat(A,B);
                                printf("The sum of \n");
                                displayMat(A);
                                printf("and\n");
                                displayMat(B);
                                printf(" is \n");
                                displayMat(C);
                                break;

                        case 2: printf("The first matrix:\n");
                                printf("The no. of rows: ");
                                scanf("%d",&m);
                                printf("The number of coloumns: ");
                                scanf("%d",&n);
                                readMat(A);

                                printf("The Second matrix:\n");
                                printf("The no. of rows: ");
                                scanf("%d",&m);
                                printf("The number of coloumns: ");
                                scanf("%d",&n);
                                readMat(B);
                                C= subtractMat(A,B);
                                printf("The difference of \n");
                                displayMat(A);
                                printf("and\n");
                                displayMat(B);
                                printf(" is \n");
                                displayMat(C);
                                break;

                        case 3: printf("The first matrix:\n");
                              printf("The no. of rows: ");
                                scanf("%d",&m);
                                printf("The number of coloumns: ");
                                scanf("%d",&n);
                                readMat(A);

                                printf("The Second matrix:\n");
                                printf("The no. of rows: ");
                                scanf("%d",&m);
                                printf("The number of coloumns: ");
                                scanf("%d",&n);
                                readMat(B);
                                C= multiplyMat(A,B);
                                printf("The product of \n");
                                displayMat(A);
                                printf("and\n");
                                displayMat(B);
                                printf(" is \n");
                                displayMat(C);
                                break;

                        case 4: printf("The first matrix:\n");
                                printf("The no. of rows: ");
                                scanf("%d",&m);
                                printf("The number of coloumns: ");
                                scanf("%d",&n);
                                readMat(A);

                                C= transposeMat(A);
                                printf("The transpose of\n");
                                displayMat(A);
                                printf(" is \n");
                                displayMat(C);
                                break;
                        default: break;


                }
        }
        return 0;
}

