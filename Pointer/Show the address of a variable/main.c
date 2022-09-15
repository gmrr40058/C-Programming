#include <stdio.h>

int main()
{
    int x=56;
    float y=4.78;
    char z='A';
    printf("The address of %d is= %x\n",x,&x);
    printf("The address of %f is= %x\n",y,&y);
    printf("The address of %c is= %x\n",z,&z);
}
