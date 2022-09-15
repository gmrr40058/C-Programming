#include <stdio.h>
#include<math.h>

int main()
{
    int result,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    result=abs(num);
    printf("Absolute Value of %d is= %d",num,result);
    return 0;
}
