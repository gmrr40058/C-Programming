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
            printf("%c ",col+64);// ASCII Value A=65(col+64) a=97(col+96)
        }
        printf("\n");
    }
}
