#include <stdio.h>

int x=100;
void local_var(void);
void static_var(void);
void global_var(void);
int main()
{
    printf("First time:\n");
    local_var();
    static_var();
    global_var();
    printf("\nSecond time:\n");
    local_var();
    static_var();
    global_var();
    return 0;
}
void local_var(void)
{
    int x=1;
    printf("As a Local Variable:\n");
    printf("x = %d\n",x);
    x++;
    printf("x++ = %d\n",x);
}
void static_var(void)
{
    static int x=10;
    printf("As a Static Variable:\n");
    printf("x = %d\n",x);
    x++;
    printf("x++ = %d\n",x);
}
void global_var(void)
{
    printf("As a Static Variable:\n");
    printf("x = %d\n",x);
    x++;
    printf("x++ = %d\n",x);
}
