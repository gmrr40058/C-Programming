#include <stdio.h>

int main()
{
    int n,row,col;
    printf("Enter how many row you want: ");
    scanf("%d",&n);
    // First half
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);// for binary- col%2;For capital alphabet- col+64(%c); col+96(%c);*;#.

        }
        printf("\n");
    }
    //Second half
    for(row=n-1;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);// for binary- col%2;For capital alphabet- col+64(%c); col+96(%c);*;#.

        }
        printf("\n");
    }
}
