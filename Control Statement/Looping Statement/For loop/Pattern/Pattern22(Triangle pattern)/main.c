#include <stdio.h>

int main()
{
    int n,row,col;
    printf("Enter how many row you want: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(row==n||col==1||col==row)
                printf("*");// for binary- row%2;For capital alphabet- row+64(%c); row+96(%c);*;#.
            else
                printf(" ");
        }
        printf("\n");
    }
}
