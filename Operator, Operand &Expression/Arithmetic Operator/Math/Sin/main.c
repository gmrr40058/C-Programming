#include <stdio.h>
#include <math.h>

int main()
{
    double result,value;
    printf("Enter valure: ");
    scanf("%lf",&value);
    result=sin(value);
    printf("Sin(%lf)= %lf",value,result);
    return 0;
}
