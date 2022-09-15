#include <stdio.h>

int func1(int,float);
int func2(int x,float z);
int main()
{
    func1(5,10.56);
    func2(100,200.6);
}
int func1(int x,float y)
{
    printf("printing from func1: x= %d\ty= %f\n",x,y);
}
int func2(int x,float z)
{
    printf("printing from func2: x= %d\ty= %.1f\n",x,z);
}


