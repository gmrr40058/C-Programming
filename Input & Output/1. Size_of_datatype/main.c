#include <stdio.h>

int main()
{
    int a;
    float b;
    double c;
    char d;
    long  e;
    short f;
    long double g;

    printf("Size of int is %d Bytes.\n",sizeof(a));
    printf("Size of float is %d Bytes.\n",sizeof(b));
    printf("Size of double is %d Bytes.\n",sizeof(c));
    printf("Size of char is %d Byte.\n",sizeof(d));
    printf("Size of long int is %d Bytes.\n",sizeof(e));
    printf("Size of short is %d Bytes.\n",sizeof(f));
    printf("Size of long double is %d Bytes.\n",sizeof(g));

}
