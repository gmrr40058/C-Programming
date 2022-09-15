#include <stdio.h>

int first_function(int x,int y,int z)
{
    int sum;
    sum=x+y+z;
    printf("Sum= %d\n",sum);
    return sum;
}
int main()
{

    printf("Printing from main, Sum= %d.\n",first_function(5,10,15));
    first_function(50,10,13);
    return 0;
}
