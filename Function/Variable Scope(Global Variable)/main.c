#include <stdio.h>

int x=10,z;// x and z declaring globally and x initializing(10) z initializing 0 auto.
int y;// y declaring globally.
y=20;// y initializing(20).
void func_1(void);
void func_2(void);
void func_3(void);
int main()
{
    printf("From main before calling functions\nx= %d\ny= %d\nz= %d\n",x,y,z);
    func_1();
    func_2();
    func_3();
    printf("From main after calling functions 2\nx= %d\ny= %d\nz= %d\n",x,y,z);

}
void func_1(void)
{

    printf("From func_1()\nx= %d\ny= %d\nz= %d\n",x,y,z);
    x=15;//new value of x (globally change).
    z=5;//new value of z (globally change).
}
void func_2(void)
{
    printf("From func_2()\nx= %d\ny= %d\nz= %d\n",x,y,z);
}
void func_3(void)
{
    int y=100;//y declaring and initialing locally global value not use able.
    printf("From func_2()\nx= %d\ny= %d\nz= %d\n",y);
}
