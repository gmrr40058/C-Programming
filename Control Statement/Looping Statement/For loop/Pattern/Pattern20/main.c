#include <stdio.h>

int main()
{
    int n,row,col,num=1;
    printf("Enter how many row you want: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",num++);
        }
        printf("\n");
    }
}
