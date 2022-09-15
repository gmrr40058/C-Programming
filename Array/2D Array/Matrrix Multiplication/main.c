#include <stdio.h>

int main()
{
    int p,q,r,i,j,k,sum;
    printf("Enter MatA row number: ");
    scanf("%d",&p);
    printf("Enter MatA column number: ");
    scanf("%d",&q);
    printf("As the condition of Matrix multiplication is\nMatA(col)=MatB(row)\nSo MatB row number is already inserted.\n");
    printf("Enter MatB column number: ");
    scanf("%d",&r);
    int MatA[p][q],MatB[q][r],MatC[p][r];
    printf("Enter Values of MatA\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&MatA[i][j]);
        }
    }
    printf("\n\nMatA= \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",MatA[i][j]);
        }
        printf("\n");
    }
    printf("Enter Values of MatB\n");
    for(i=0;i<q;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&MatB[i][j]);
        }
    }
    printf("\n\nMatB= \n");
    for(i=0;i<q;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",MatB[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\nMatC= MatA*MatB= \n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<r;j++)
        {
            sum=0;
            for(k=0;k<q;k++)
            {
                sum+=MatA[i][k]*MatB[k][j];
            }
            MatC[i][j]=sum;
            printf("%d\t",MatC[i][j]);
        }
            printf("\n");
    }
}
