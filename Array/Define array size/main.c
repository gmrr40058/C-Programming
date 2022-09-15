#include <stdio.h>
#define array_size 5// Define array size as a constant array_size.

int main()
{
    int A[array_size],n,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int B[n];// Define array size as a variable n.
    for(i=0;i<5;i++)
    {
        printf("Enter %dst value: ",i+1);
        scanf("%d %d",&A[i],&B[i]);
        printf("A[%d]= %d    B[%d]= %d\n",i,A[i],i,B[i]);
    }
}
