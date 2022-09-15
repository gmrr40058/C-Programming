#include <stdio.h>

int main()
{
    int n,row,col,num1,num2;
    printf("Enter how many row you want: ");
    scanf("%d",&n);
    //printing upper part.
    num1=n+3;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row+(n-1);col++)
        {
            if(row+col==n+1)
               {
                    printf("*");// for binary- row%2;For capital alphabet- row+64(%c); row+96(%c);*;#.
               }
            else if(row+col==num1)
            {
                printf("*");
                num1=num1+2;
            }

            else
                printf(" ");
        }
        printf("\n");
    }
    //printing lower part part.
    num2=num1-4;
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row+(n-1);col++)
        {
            if(row+col==n+1)
               {
                    printf("*");// for binary- row%2;For capital alphabet- row+64(%c); row+96(%c);*;#.
               }
            else if(row+col==num2)
            {
                printf("*");
                num2=num2-2;
            }

            else
                printf(" ");
        }
        printf("\n");
    }
}
