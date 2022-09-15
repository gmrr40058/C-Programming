#include <stdio.h>

long find_factorial(long x)
{
    if(x<=1)
       return 1;
    else
        return(x*find_factorial(x-1));
}

int main()
{
    int a;
    printf("Enter a number which you calculate factorial: ");
    scanf("%d",&a);
    printf("a!=%ld ",find_factorial(a));
    return 0;
}
