#include <stdio.h>

float change_date(int r,int n,int s)
{
    int result;
    result=r+n+s;
    return result;
}
void main()
{
    float get;
    get=change_date(15,25,20);
    printf("Result= %f\n",get);
}
