#include <stdio.h>


int main()
{
    int x, *y;
    x=1;
    y=&x;
    printf("Value of y= %x\n",y);
    printf("Value of x= %d\n",x);
    printf("Address of x= %x",&x);
}
